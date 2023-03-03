#include <bits/stdc++.h>
using namespace std;
class sampl
{
    int x,y;
    public:
    sampl(int a,int b)
    {
        x=a;
        y=b;
    }
    friend int sum(sampl s);
};
int sum(sampl s)
{
    int sum=s.x+s.y;
    return sum;
}
int main()
{
    sampl obj(10,15);
    cout<<"sum="<<sum(obj);
}
