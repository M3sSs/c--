#include<iostream>
#include "header1.h"
using namespace std;
namespace ns1
{
    int subtract(int a,int b)
    {
        return a-b;
    }
    int multiply(int a,int b)
    {
        return a*b;
    }
    void display(int a,int b)
    {
        cout<<multiply(a,b)<<'\n'<<subtract(a,b);
    }
}
// using namespace ns1;
using namespace ns2;
int main()
{
    int a,b;
    cout<<"enter 2 no.\n";
    cin>>a>>b;
    cout<<add(a,b)<<'\n';
    ns1::subtract(a,b);
    ns1::multiply(a,b);
    ns1::display(a,b);
}