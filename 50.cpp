#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool found =false;
    for(int i =0;i<=n;i++)
    {
        if(i*i==n)
        {
            found=true;
            break;
        }
    }

if(n>=0 && found)
cout<<"perfect square";
else
cout<<"not a perfect square";
}