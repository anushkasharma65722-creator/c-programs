#include<iostream>
using namespace std;
class Number{
    public :
    int num;
    void check(){
        if(num%2==0)
        {
            cout<<"EVEN NUM";
        }
        else{
            cout<<"ODD NUM";
        }
    }
};
int main()
{
    Number n1;
    n1.num=7;
    n1.check();
}
