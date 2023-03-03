// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class distan
{
    private:
    int m,cm;
    public:
    void Input()
    {
        cout<<"enter value in m and cm\n";
        cin>>m>>cm;
    }
    friend distan add(distan,distan);
    void display(distan d3)
    {
        cout<<"calue of m="<<d3.m<<'\n';
        cout<<"value of cm="<<d3.cm<<'\n';
    }
};
distan add(distan d1,distan d2)
{
    distan d3;
    d3.m=d1.m+d2.m;
    d3.cm=d1.cm+d2.cm;
    return d3;
}
int main() {
    // Write C++ code here
distan d1,d2,d4;
d1.Input();
d2.Input();
d4=add(d1,d2);
d4.display(d4);
}
