#include <iostream>
#include <fstream>
using namespace std;
int frequency(string s)
{
    fstream fio;
    fio.open("xy.txt",ios::out|ios::in);
    int f=0;
    string p;
    while(getline(fio,p))
    {
        if(p==s)
        f++;
    }
    return f;
}
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

        fio<<line.c_str()<<endl;
    }
    string word;
    cout<<"enter a word to be searched\n";
    cin>>word;
    int f=frequency(word);
    fstream fin;
    fin.open("frequency.txt",ios::out);
    fin<<f;
    cout<<"frequency of "<<word<<"="<<f<<"\n";
}