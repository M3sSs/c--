#include<iostream>
using namespace std;
class student
{
 private:
     int roll;
     string name;
 public:
    void setDetails(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }
    void show()
    {
     cout<<"Roll No. is= "<<roll<<"\t"<<"Name is = "<<name<<endl;

    }

    ~student()
    {
     cout<<"memory is free now";
    }
};

int main()
{
student s;
s.setDetails(40,"abc");
s.show();
}
