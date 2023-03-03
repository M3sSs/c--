#include<iostream>
#include<string.h>
using namespace std;
void sorting(string s[],int n)
{
    for(int i=0;i<n;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(s[m].compare(s[j])>0)
            m=j;
        }
        string temp=s[m];
        s[m]=s[i];
        s[i]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<s[i]<<' ';
}
int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    sorting(s,n);
    return 0;
}