#include<iostream>
#include<cstdlib>
using namespace std;

class person
{
    protected:
    int age;
    char name[20];
    
    public:
    person()
    {
        cout<<"person constructor......"<<endl;
    }
    void input()
    {
        cout<<"enter the details:"<<endl;
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter age: "<<endl;
        cin>>age;
    }
    ~person()
    {
        cout<<"person class decsutor..."<<endl;
    }
};

class student:protected person
{
  int id;
  public:
  student()
  {
      cout<<"stduent constructor..."<<endl;
      cout<<"Enter ID: ";
      cin>>id;
      input();
  }
  void show()
  {
      cout<<"Details:"<<endl;
      cout<<"ID: "<<id<<endl;
      cout<<"NAME: "<<name<<endl;
      cout<<"AGE: "<<age<<endl;
  }
  ~student()
  {
      cout<<"student decusrtuctor..."<<endl;
  }
};

int main()
{
    student obj;
    
    obj.show();
    
}
