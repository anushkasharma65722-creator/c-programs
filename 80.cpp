#include<iostream>
using namespace std;
class student
{
    public:
    int marks;
    void display()
    {
        cout<<"marks="<<marks;
    }
};
int main()
{
    student s1;
    s1.marks=90;
    s1.display();
    
}