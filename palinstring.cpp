#include<iostream>
#include<string.h>
using namespace std;
/*it will return 0 if string is palin else it will return 1*/
int palin(string s)
{
    int len=s.length()-1;
    string new_s="";
    while(len>=0)
    {
        new_s=new_s+s[len];
        len--;
    }
    //cout<<new_s<<'\n';
    if(s.compare(new_s)==0)
    return 0;
    else
    return 1;
}
int main()
{
    string s;
    cin>>s;
    if(palin(s)==0)
    cout<<"string is palin\n";
    else
    cout<<"string is not palin\n";
    return 0;
}