// function for greatest of three
#include<iostream>
using namespace std;
class Greatest {
    public:
        int a,b,c;
     void findGreatest(){
        if(a>b && a>c){
            cout<<a<<"is greatest";
        }
        else if(b>c){
            cout<<b<<"is greatest";
        }
        else {
            cout<<c<<"is greatest";
        }
     }
};
int main(){
    Greatest g;
    g.a=10;
    g.b=25;
    g.c=15;
    g.findGreatest();
}
