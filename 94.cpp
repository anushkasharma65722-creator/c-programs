#include<iostream>
using namespace std;
void check(int n)
{
    if(n>=0)
    {
        cout<<"Positive";
    }
    else if(n<0)
    {
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    }
int main()
{
    check(-7);
    return 0;
}