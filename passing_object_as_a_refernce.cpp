#include <bits/stdc++.h>
using namespace std;
class xyz2;
class xyz
{
    int x;
    public:
    void get(int y)
    {
        x=y;
    }
    friend void display(xyz s,xyz2 s2);
    friend void swap(xyz &s,xyz2 &s2);
};
class xyz2
{
    int b;
    public:
    void get(int y)
    {
        b=y;
    }
    friend void display(xyz s,xyz2 s2);
    friend void swap(xyz &s,xyz2 &s2);
};
void display(xyz s,xyz2 s2)
{
    cout<<"a="<<s.x<<endl;
    cout<<"b="<<s2.b<<endl;
}
void swap(xyz &s,xyz2 &s2)
{
    int t=s.x;
    s.x=s2.b;
    s2.b=t;
}
int main()
{
    xyz obj1;
    xyz2 obj2;
    obj1.get(5);
    obj2.get(15);
    cout<<"before swap  ";
    display(obj1,obj2);
    swap(obj1,obj2);
    cout<<"after swap   ";
    display(obj1,obj2);
}
