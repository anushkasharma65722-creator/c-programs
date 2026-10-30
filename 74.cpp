#include<iostream>
using namespace std;
class student 
{
    private:
    int marks;
    public:
    void inputMarks()
    {
        cout<<"enter your marks:";
        cin>>marks;
    }
    void checkResult()
    {
        if(marks>=33)
        {
            cout<<"Result:pass"<<endl;
        }
        else
        {
            cout<<"Result: fail"<<endl;
        }
    void showMarks()
    {
        cout<<"your marks="<<marks<<endl;
    }
};
    int main()
    {
        student s;
        s.inputMarks();
        s.showMarks();
        s.checkResult();
    }
}
