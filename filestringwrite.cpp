#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("a.txt");
    string s;
    while(fout)
    {
       getline(cin,s);
       if(s=="-1")
       break;
       fout<<s<<endl;
    }
  fout.close();
}
    