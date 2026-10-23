#include<iostream>
using namespace std;
int main()
{
    int choice,n;
    do
    {
     cout<<"\n1.find square";
     cout<<"\n2.find cube";
     cout<<"\n3.check positive or negative";
     cout<<"\n4.exit";
     cout<<"\nenter choice:";
     cin>>choice;
     switch(choice)
     {
        case 1:
        cout<<"enter number:";
        cin>>n;
        cout<<"Square="<<n*n;
        break;
        case 2:
        cout<<"enter number:";
        cin>>n;
        cout<<"cube="<<n*n*n;
        break;
        case 3:
        cout<<"enter number:";
        cin>>n;
        if(n>0)
        cout<<"positive";
        else if(n<0)
        cout<<"negative"; 
         else
         cout<<"zero";
        break;
        case 4:
        cout<<"exiting..";
        break;
        default:
        cout<<"invalid choice";
    

     }
    }while(choice!=4);
}