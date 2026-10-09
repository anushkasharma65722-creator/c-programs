#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"enter number:";
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    
    }
    cout<<"reverse="<<rev;
}