#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b;
    do
    {
        cout<<"\n=====CALCULATOR MENU=="<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.multiplicatiom"<<endl;
        cout<<"4.division"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
             cout<<"Enter two numbers:";
             cin>>a>>b;
             cout<<"sum="<<a+b<<endl;
             break;
             
             case 2:
             cout<<"Enter two numbers:";
             cin>>a>>b;
             cout<<"Difference="<<a-b<<endl;
             break;
              
            case 3:
            cout<<"Enter two numbers:";
            cin>>a>>b;
            cout<<"Product"<<a<<b<<endl;

            case 4:
            cout<<"Enter two numbers:";
            cin>>a>>b;
            if(b!=0)
            cout<<"Division"<<a/b<<endl;
            else
            cout<<"Cannot divide by zero!"<<endl;
            break;
            case 5:
            cout<<"exiting calculator:";
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }while (choice!=5);
    return 0;
}