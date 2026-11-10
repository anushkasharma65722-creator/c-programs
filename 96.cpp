#include<iostream>
using namespace std;
class Rectangle{
public:
 int length;
 int breadth;
 void area(){
    cout<<"Area of rectangle is:"<<length*breadth;
 } 
};
int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=5;
    r.area();
}