#include <bits/stdc++.h>
using namespace std;
class xyz
{
    int x,y;
    public:
    xyz(){}
    xyz(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
     cout<<x<<endl;
     cout<<y;   
    }
    friend xyz operator+(xyz m,xyz z);
};
    xyz operator+(xyz m,xyz z)
    {
        xyz t;
        t.x=z.x+m.x;
        t.y=z.y+m.y;
        return t;
    }
int main()
{
    xyz a(10,20),b(30,40);
    xyz t=a+b;
    t.show();
}
