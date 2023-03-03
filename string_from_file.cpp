#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fio;
    fio.open("xy.txt");
    string c;
    int t=0;
    while(fio>>c)
    {
        cout<<c<<" ";
        t++;
    }
    cout<<t;
}