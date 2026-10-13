#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    int largest=-1,second=-1 ;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        if(digit>largest)
        {
            second=largest;
            largest=digit;
        }
        else if (digit<largest&&digit>second)
        {
            second=digit;
        }
        n=n/10;
    }}
    if(second==-1){
    cout<<"no second largest distinct digit";
    else
    cout<<"second largest digit="<<second;
}