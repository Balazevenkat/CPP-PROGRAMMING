#include<iostream>
using namespace std;

class person
{
    protected:
    char name[20];
    int id;
    public:
    person()
    {
        cout<<"person const"<<endl;
    }
    void input()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"ID: "<<endl;
        cin>>id;
    }
    ~person()
    {
        cout<<"person de-const"<<endl;
    }
};

class student:public person
{
    public:
    student()
    {
        cout<<"student constructor"<<endl;
    }
    void stu_dis()
    {
        cout<<"**********************"<<endl;
        cout<<"student detalis"<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"NAME: "<<name<<endl;
    }
    ~student()
    {
        cout<<"student de-constructor"<<endl;
    }
    
};

class teac:public person
{
    public:
    teac()
    {
        cout<<"teach constructor"<<endl;
    }
    void teac_dis()
    {
        cout<<"**********************"<<endl;
        cout<<"Teeacher detalis"<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"NAME: "<<name<<endl;
    }
    ~teac()
    {
        cout<<"teach de-constructor"<<endl;
    }
};

int main()
{
    teac obj1;
    
    obj1.input();
    
    obj1.teac_dis();
    
    student obj2;
    obj2.input();
    obj2.stu_dis();
    
}

/*student de-constructor
person de-const
teach de-constructor
person de-const*/
