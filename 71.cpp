#include<iostream>
using namespace std;
class BankAccount
{
    private:
    int balance=5000;
    public:
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance=balance+amount;
            cout<<"money deposited successfully!"<<endl;
        }
        else
        {
            cout<<"Invalid amount!"<<endl;
        }
    }
    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance=balance-amount;
            cout<<"money withdrawn successfully!"<<endl;
        }
        else
        {
            cout<<"insufficient balance"<<endl;
        }
    }
    void showBalance()
    {
        cout<<"Current balance="<<balance<<endl;
    }
};
int main()
{
    BankAccount b;
    b.showBalance();
    b.deposit(1000);
    b.withdraw(2000);
    b.showBalance();
}