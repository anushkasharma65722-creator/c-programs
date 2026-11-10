#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    void display(){
    cout<<"roll:"<<roll<<endl;
    cout<<"name:"<<name<<endl;
}};
int main()
{
    student s1;
    s1.roll=10;
    s1.name="ashi";
    s1.display();

}
