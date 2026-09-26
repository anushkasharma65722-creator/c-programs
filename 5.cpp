#include<iostream>
using namespace std;
int main(){
    double P,R,T,SI;
    cout<<"Enter Principal amount:";
    cin>>P;
    cout<<"Enter Rate of interest:";
    cin>>R;
    cout<<"Enter Time:";
    cin>>T;
    SI = (P*R*T)/100;
    cout<<"Simple interest"<<SI;

}