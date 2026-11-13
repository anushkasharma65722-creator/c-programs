// class for adding two numbers
#include<iostream>
using namespace std;
class Demo{
    public:
        void add(int a, int b){
            cout<<a+b;
        }
};
int main(){
    Demo d;
    d.add(10, 20);

}
