#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<"enter 2 values\n";
    cin>>a>>b;
    cout<<"value of a before swap "<<a<<'\n';
    cout<<"value of b before swap "<<b<<'\n';
    swap(a,b);
    cout<<"value of a after swap "<<a<<'\n';
    cout<<"value of b after swap "<<b<<'\n';
}