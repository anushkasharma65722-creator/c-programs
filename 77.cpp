#include<iostream>
using namespace std;
class student{
    public:
    static int count;};
    int student::count=5;
    int main()
{
    student s1,s2;
    student::count++;
    cout<<student::count;
}