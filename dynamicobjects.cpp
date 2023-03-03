#include <bits/stdc++.h>
using namespace std;
class xyz
{
    int x;
    public:
    void s()
    {x=0;cout<<x;};
};
int main()
{
    xyz *ptr;
    ptr=new xyz;
    ptr->s();
    delete ptr;
}
