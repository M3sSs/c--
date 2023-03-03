#include <bits/stdc++.h>
using namespace std;
class xyz
{
    int x=10;
    int y=20;
    public:
    int sum()
    {
        return x+y;
    }
    virtual int subtract()
    {
        return x-y;
    }
};
class child:public xyz
{
    public:
     int subtract()
     {
        return 0;
     }
};


int main()
{
    xyz ob;
    cout<<"sum ="<<ob.sum()<<endl;
    child ob2;
    xyz *ptr=&ob2;
    cout<<"subtract ="<<ptr->subtract();
}