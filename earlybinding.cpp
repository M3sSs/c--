#include<iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout<<"base class\n";
    }
    ~Base();
};
class child: public Base
{
    public:
    void display()
    {
        cout<<"child class\n";
    }
};
int main()
{
    Base *p=new child;
    p->display();
}