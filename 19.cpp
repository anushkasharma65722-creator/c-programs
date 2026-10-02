#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n>0 || n==0)
    {
        if(n>0)
        cout<<"positive";
        else
        cout<<"zero";
    }
    else
    cout<<"negative";
      
    }
