#include<iostream>
using namespace std;
class calculator
{
    public:
    int a=10;
    int b=20;
    void add()
    {
        cout<<a+b;
    }
};
int main()
{
    calculator c1;
    c1.add();
}