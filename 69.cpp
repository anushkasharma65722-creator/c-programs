#include<iostream>
using namespace std;
class Mobile
{
    public:
    string brand;
    int price;
    void showDetails()
    {
        cout<<"Brand:"<<brand<<endl;
        cout<<"price:"<<price;
    }
    };
    int main()
    {
    m1.brand="samsung";
    m1.price=15000;
    m1.showDetails();
}