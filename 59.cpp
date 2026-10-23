#include<iostream>
using  namespace std;
int main()
{
    int choice,n;
    do 
    {
        cout<<"\n1.check even or odd";
        cout<<" \n2.Exit";
        cout<<"\nEnter choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter a number:";
            cin>>n;
            if (n%2==0)
              cout<<"Even number";
            else
               cout<<"odd number";
            break;
            case 2:
            cout<<"Exiting";
            break;
            default:
            cout<<"Invalid choice";
        }
        }while(choice!=2);
    
    }
