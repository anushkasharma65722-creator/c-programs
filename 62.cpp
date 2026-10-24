#include<iostream>
using namespace std;
int sqaure(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"square="<<square(n);
    return 0;
}