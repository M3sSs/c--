#include<iostream>
using namespace std;
#define max 5
int push(int arr[],int top)
{
    if(top==max-1)
    cout<<"overflow\n";
    else
    {
        top=top+1;
        int val;
        cin>>val;
        arr[top]=val;
    }
    return top;
}
int pop(int arr[],int top)
{
    if(top==-1)
    cout<<"stack is underflow\n";
    else
    {
        cout<<"poped out value="<<arr[top];
        top--;
    }
    return top;
}
void display(int arr[],int top)
{
    for(int i=0;i<=top;i++)
    cout<<arr[i]<<' ';
}
int main()
{
    int arr[max],top=-1,ch;
    do
    {
        /* code */
        cout<<"\nenter 1 for push\nenter 2 for pop\nenter 3 for display\nenter 4 for exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:top=push(arr,top);
            break;
        case 2:top=pop(arr,top);
        break;
        case 3:display(arr,top);
        break;
        case 4:exit(0);
        }
    } while (1);
    

}