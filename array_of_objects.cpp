#include <bits/stdc++.h>
using namespace std;
class xyz
{
    int a;
    public:
    void set(int i)
    {
        a=i;
    }
    int get()
    {
        return a;
    }
};
int main()
{
    xyz ob[4];
    for(int i=0;i<4;i++)
    {
        ob[i].set(i);
        cout<<ob[i].get()<<endl;
    }
}