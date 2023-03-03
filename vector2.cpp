#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int>v1{1,2,3,4,5};
    vector <int>::iterator it=v1.begin();
    v1.insert(it+2,10);//insert value 10 after 2nd position
    for (int i = 0; i < v1.size(); i++)
    {
        /* code */
        cout<<v1[i]<<" ";
    }
    
}