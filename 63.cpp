#include<iostream>
using namespace std;
int greatest(int a,int b)
{
    if(a>b)
    return a;
else if (b>a)
    return b;
else 
    return a;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Greatest="<<greatest(x,y);
    return 0;
}