#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 5
class stu
{
    char name[20];
    int id;
    public:
    stu()
    {
        cout<<endl;
        cout<<"defalut constructor"<<endl;
        cout<<"_____________"<<endl;
    }
    void input()
    {
        int x;
        cout<<"Enter ID: ";
        cin>>x;
        id=x;
        cout<<"Entr name: ";
        cin>>name;
        
    }
    
    void print()
    {
        cout<<endl;
        cout<<"ID: "<<id<<" Name: "<<name<<endl;
    }
    ~stu()
    {
        cout<<"distcuotor"<<endl;
    }
};

int main()
{
    
    stu obj1;
    
    cout<<"**info**"<<endl;
    obj1.input();
    
    obj1.print();
    
}
