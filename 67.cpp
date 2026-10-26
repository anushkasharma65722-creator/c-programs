#include<iostream>
using namespace std;
class Dog
{
    public:
    string name;
    string breed;
    void fn()
    {
        cout<<name<<"  is barking!"<<endl;
        cout<<breed<<" is very expensive!";
    }   
    };
    int main()
    { 
        Dog d;
        d.name="Tommy";
        d.breed="Labrador";
        d.fn();
    }

