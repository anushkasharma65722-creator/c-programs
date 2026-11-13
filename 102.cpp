#include<iostream>
using namespace std;
class Table{
    public:
    void show(){
        int n=5;
        for(int i=1;i<=10;i++){
          cout<<n<<"*"<<i<<"="<<n*i<<endl;
        }
    }
};
int main(){
    Table t;
    t.show();
}