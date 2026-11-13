#include<iostream>
using namespace std;
class Cube{
    public:
    int calculate(){
        int n=4;
        return n*n*n;
    }
};
int main(){
    Cube c;
    int ans=c.calculate();
    cout<<"Cube="<<ans;
}
