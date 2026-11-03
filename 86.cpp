#include<iostream>
using namespace std;
class student
{
    public:
    int marks;
    student(int m)
    {
        marks=m;
    }
student(const student &s)
{
    marks=s.marks;
}
};
int main()
{
    student s1(85);
    student s2(s1);
    cout<<s2.marks;
}