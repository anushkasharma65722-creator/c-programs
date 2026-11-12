#include<iostream>
using namespace std;
class Calculator{
    public:
    int a,b;
    void add(){
        cout<<"addition is:"<<a+b<<endl;
    }
    void multiply(){
        cout<<"multiplication is:"<<a*b<<endl;
    }
};
int main(){
    Calculator c;
    c.a=10;
    c.b=5;
    c.add();
    c.multiply();
}
