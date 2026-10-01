#include<iostream>
usimg namespace std;
int main () 
{
    int units;
    double bill;
    cout<<"Enter units consumed:";
    cin>>units;
    if (units<=100)
     bill = units *5;
     else if(units<=200)
     bill= units*7;
     else 
     bill = units*10;
    cout<<"Electricity bill = rs."<< bill; 
}