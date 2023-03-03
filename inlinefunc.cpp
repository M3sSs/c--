#include<iostream>
using namespace std;
inline int abc(int a,int b)
{
    return a+b;
}
int main()
{
    cout<<"enter 2 values\n";
    int a,b;
    cin>>a>>b;
    cout<<abc(a,b);
}