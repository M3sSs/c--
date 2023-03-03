#include <bits/stdc++.h>
using namespace std;
class sampl
{
    int x;
    public:
    sampl()
    {
        x=0;
    }
    sampl(int t)
    {
        x=t;
    }
    sampl(sampl &y)
    {
        x=y.x;
    }
    void display()
    {
        cout<<x<<endl;
    }
    ~sampl()
    {
        cout<<endl<<"destructor is called  "<<x;

    }
};
int main()
{
    sampl ob1;
    sampl ob2(10);
    sampl ob3(ob2);
    ob1.display();
    ob2.display();
    ob3.display();
}
