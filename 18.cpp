 #include<iostream>
 using namespace std;
 int main()
 {
    int age ,id;
    cout <<"enter age:";
    cin>>age;
    cout <<"enter id:";
    cin>>id;
    if(age>=18 || id==1)
    {
    if(age>=18)
       cout<<"entry allowed bcoz age is valid";
    else 
       cout<<"entry allowed  bcoz id is valid";
    }
    else
    {
       cout<<"entry not allowed";
    }


 }