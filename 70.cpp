#include<iostream>
using namespace std;
class student {
    private:
    int marks=0;
    public:
    void setMarks(int m)
    {
        if(m>=0 && m<=100)
        {
            marks=m;
        }
        else
        {
            cout<<"Invalid marks!"<<endl;
            
        }
    }
    
    int getMarks()
    {
        return marks;
}
};
int main()
{ int m;
    cout<<"enter marks";
    cin>>m;
    student s;
    s.setMarks(m);
    cout<<"Marks="<<s.getMarks();
    return 0;
}