#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length ,breadth;
    public:
    void setDimension(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        cout<<"area="<<length*breadth;
    }
    }; 
    int main()
    {
        Rectangle r;
        r.setdimensions(5,4);
        r.area();
    }
}
