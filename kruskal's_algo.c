#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int src, dest, wt;
    struct node *next;
}node;

// Find parent function
int find_parent(int *a, int u)
{
    if(*(a + u) == u)
        return u;

    // Path Compression, find ultimate parent of u and store as its parent
    return (*(a + u) = find_parent(a, *(a + u)));
}

// Make union function, to make parent of v = u
void make_union(int *a, int u, int v)
{
    *(a + v) = u;
}

// Function to keep a sorted linked list of edges
node *insertEdge(node* start)
{
    int u, v, w;
    scanf("%d %d %d",&u,&v,&w);

    node *n = (node*)malloc(sizeof(node));
    n->src = u;
    n->dest = v;
    n->wt = w;
    n->next = NULL;

    if(start == NULL)
    {
        start = n;
    }
    else
    {
        if(start->next == NULL)
        {
            if(start->wt > n->wt)
            {
                n->next = start;
                start = n;
            }
            else
            {
                start->next = n;
            }
        }
        else
        {
            node* t = start;
            if(n->wt < t->wt)
            {
                n->next = t;
                start = n;
            }
            else
            {
                while(t->next != NULL && t->next->wt <= n->wt)
                {
                    t = t->next;
                }

                if(t->next)
                {
                    node *temp = t->next;
                    t->next = n;
                    n->next = temp;
                }
                else
                {
                    t->next = n;
                }
            }
        }
    }

    return start;
}

void printList(node *head)
{
    while(head != NULL)
    {
        printf("%d %d %d\n", head->src, head->dest, head->wt);
        head = head->next;
    }
}

int main()
{
    printf("Enter number of vertices and edges\n");
    int v, e;
    scanf("%d %d",&v,&e);

    node* start = NULL;

    while(e--)
    {
        start = insertEdge(start);
    }
    node *t1=start;
    printf("spanning tree\n");
    while (t1!=NULL)
    {
        /* code */
        printf("%d %d %d\n",t1->src,t1->dest,t1->wt);
        t1=t1->next;
    }
    
    int parent[v];
    for(int i = 0; i < v; i++)
    {
        parent[i] = i;
    }

    int cost = 0, i = 0;
    node* t = start;
    while(t != NULL)
    {
        int x = t->src;
        int y = t->dest;

        // Find parent
        x = find_parent(parent, x);
        y = find_parent(parent, y);

        // If parent are not same, make a union and count the edge in MST otherwise skip
        if(x != y)
        {
            make_union(parent, t->src, t->dest);
            printf("%d %d %d\n",t->src,t->dest,t->wt);
            cost = cost + t->wt;
            i++;
        }

        if(i == v-1)
            break;
        
        t = t->next;
    }

    printf("Cost of MST = %d",cost);

    return 0;
}