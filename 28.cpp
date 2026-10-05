#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i=0;i<=100;i++)
    {
        if(i%5==0 && i%3==0)
     {
        count++;
     }
    }
    cout<<"count="<<count;

}