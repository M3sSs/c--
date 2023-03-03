#include <iostream>
#include <cstring>
using namespace std;
class xyz
{
    public:
    void sort(char ch[])
    {
        for(unsigned int i=0;i<strlen(ch);i++)
        {
            int m=i;
            for(unsigned int j=i+1;j<strlen(ch);j++)
            {
                if(ch[m]>ch[j])
                m=j;
            }
            char temp=ch[m];
            ch[m]=ch[i];
            ch[i]=temp;
        }   
        cout<<ch<<endl;
    }
};
int main()
{
    char ch[10];
    cin>>ch;
    xyz ob;
    ob.sort(ch);
    return 0;
}