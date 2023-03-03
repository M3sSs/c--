#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio;
    string line;
    fio.open("xy.txt",ios::out|ios::in);
    while(fio)
    {
        getline(cin,line);
        if(line=="*")
        break;
        fio<<line<<endl;
    }
    fio.seekg(0,ios::beg);
    while(getline(fio,line))
    {
        
        cout<<line<<endl;
    }
}