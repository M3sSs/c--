#include<iostream>
#include<stdlib.h>
using namespace std;
void searching(int arr[],int ch,int max)
{
    int f=0,l=max-1,t=0;
    while(f<=l)
    {
        int mid=(f+l)/2;
        if(ch>arr[mid])
        f=mid+1;
        else if(ch<arr[mid])
        l=mid-1;
        else
        {
            t++;
            break;
        }
    }
    if(t==1)
    cout<<"element found\n";
    else
    cout<<"element not found\n";
}
void sorting(int arr[],int max)
{
    for(int i=0;i<max;i++)
    {
        int m=i;
        for(int j=i+1;j<max;j++)
        {
            if(arr[m]>arr[j])
            m=j;
        }
        int t=arr[m];
        arr[m]=arr[i];
        arr[i]=t;
    }
}
void deletion(int arr[],int index,int max)
{
    for(int i=index;i<max-1;i++)
    arr[i]=arr[i+1];
}
void updation(int arr[],int index,int val,int max)
{
    
        for(int i=max-1;i>=index;i--)
        arr[i+1]=arr[i];
        arr[index]=val;
    
}
int main()
{
    int max=5;
    int arr[max]={5,3,4,2,1};
    do
    {
        /* code */
        int ch;
        cout<<"\nenter 1 for sorting\nenter 2 for searching\nenter 3 for deletion\nenter 4 for updation\nenter any other no. to exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:sorting(arr,max);
        for(int i=0;i<max;i++)
        cout<<arr[i]<<' ';
            break;
        case 2:cout<<"enter an element to be searched\n";
        int val;
        cin>>val;
        searching(arr,val,max);
        break;
        case 3:
        if(max>=0)
        {
            int index;
            cout<<"enter an index\n";
            cin>>index;
            deletion(arr,index,max);
            max--;
            cout<<max<<'\n';
            for(int i=0;i<max;i++)
            cout<<arr[i]<<' ';
            cout<<'\n';
        }
        else
        cout<<"no element left\n";
        break;
        case 4:
        cout<<max<<'\n';
        if(max<5)
        {
            int index;
            cout<<"enter an index\n";
            cin>>index;
            cout<<"enter a value\n";
            cin>>val;
            max++;
            updation(arr,index,val,max);
            for(int i=0;i<max;i++)
            cout<<arr[i]<<' ';
            cout<<'\n';
        }
        else
        cout<<"fuck off\n";
        break;
        default:exit(0);
            break;
        }
    } while (1);
}