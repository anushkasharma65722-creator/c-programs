#include<iostream>
using namespace std;
class Compare
{
    public:
    int a,b;
    void largest()
    {
        if(a>b)
        cout<<"A is largest";
        else
        cout<<"B is largest";
        
    }
};
int main()
{
    Compare c1;
    c1.a=40;
    c1.b=70;
    c1.largest();
}