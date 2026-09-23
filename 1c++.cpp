#include<iostream>
using namespace std;
int main()
{
int a,b,temp;
cout<<"before swapping value of a and b";
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"after swapping value of a and b";
cout<<a<<b;
return 0;
}