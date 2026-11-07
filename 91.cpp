#include<iostream>
using namespace std;
void check(int n)
{
    if(n%2==0)
    {
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
}
int main()
{
    check(7);
    return 0;
}