#include<iostream>
using namespace std;
class student
{
public:
    student()
    {
      cout<<"constructor called"<<endl;
    }
    ~student()
    {
        cout<<"Destructor called";
    }
};
int main()
{
    student s1;
}