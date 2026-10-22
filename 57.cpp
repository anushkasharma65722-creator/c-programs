#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Enter an operators";
    cin>>op;
    switch(op)
    {
        case'+':
        cout<<a+b;
        break;
         
        case'-':
        cout <<a-b;
        break;

        case'*':
        cout<<a*b;
        break;
        case'/':
        if(b!=0)
        cout<<a/b;
        else
        cout<<"cannot divide by zero";
     break;
     default:
     cout<<"invalid operator";
    }

}