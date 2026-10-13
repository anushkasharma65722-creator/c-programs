#include<iostream>
using namespace std;
int main(){
    int n,digit,largest=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        if(digit>largest)
        {
            largest=digit;
        }
        n=n/10;
    }
    cout<<"Largest digit="<<largest;
}
