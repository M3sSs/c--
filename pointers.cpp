#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    cout<<"value of a="<<a<<'\n';
    cout<<"address of a using a pointer="<<ptr<<'\n';
    cout<<"address of a using a ampersand operator="<<&a<<'\n';
}