#include<iostream>
using namespace std;
class employee
{
    private:
    int salary;
    public:
    void setSalary(int s)
    {
        salary=s;

    }
    void showSalary()
    {
        cout<<"salary="<<salary<<endl;
        cout<<"salary after bonus="<<salary+2000;
    }
};
int main()
{
    Employee e;
    e.setSalary(1500);
    e.showSalary();
    
}