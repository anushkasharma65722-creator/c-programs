#include<iostream>
using namespace std;
class student
{
    public:
    int marks;
    student(int m)
    {
        marks = m;
    }
    void display()
    {
        cout<<"marks="<<marks;
    }
};
int main(){
student s1(90);
s1.display();
}