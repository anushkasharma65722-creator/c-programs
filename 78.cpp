#include<iostream>
using namespace std;
class student
{
    public:
    static int marks;
};
int student::marks=80;
int main()
{
    student s1,s2;
    cout<<s1.marks<<endl;
    s2.marks=95;
    cout<<s1.marks;

}