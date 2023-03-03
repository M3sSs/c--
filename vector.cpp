#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v1;
    cout<<v1.capacity();
    vector <char> v2{'1','2','3','4','5'};
    cout<<endl<<v2.capacity();
    vector <int>v3(5);
    cout<<v3.capacity();
    vector<char>v4(4,'a');
    cout<<endl<<v4.capacity();
    vector<string>v5(3,"abc");
    cout<<endl<<v5.capacity();
    cout<<"\nThe vector elements are...";
    for (int i = 0; i < v2.size(); i++)
    {
        /* code */
        cout<<v2[i];
    }
    
}