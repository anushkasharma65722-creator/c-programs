#include<iostream>
using namespace std;
class father
 {
    public:
    void show()
    {
      cout<<"father class"<<endl;
    }
};
class son:public father 
{
};
int main()
{
    son s1;
    s1.show();
}