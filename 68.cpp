#include<iostream>
using namespace std;
class ATM
{
    private:
    int balance=1000;
    public:
    void checkBalance()
    {
        cout<<"Balance="<<balance<<endl;
    }
    void deposit(int amount)
    {
      if(amount>0)
      {
        balance=balance+amount;
        cout<<"Money deposited!"<<endl;
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
            balance =balance-amount;
            cout<<"Money withdrawn!"<<endl;
        }
        else
        {
            cout<<"Insufficient balance or invalid amount!"<<endl;
        }
    }
};

    int main()
    {
        ATM a;
        a.checkBalance();
        a.deposit(500);
        a.withdraw(200);
        a.checkBalance();
    
}