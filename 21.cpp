#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    if(a>b || a>c)
    {
        if(a>b && a>c)
        cout<<"a is greater";
        else 
        cout<<"a is not greater";
    }
    else
    {
        if(b>c)
        cout<<"b is greater";
        else
        cout<<"c is greater";
    }
}
