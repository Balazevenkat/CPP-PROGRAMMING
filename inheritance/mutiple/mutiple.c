/*
So order is:

employee constructor..
person constructor..
Manager constructor..

Important rule:

Base classes execute first (left → right)
Then derived class

  */


#include<iostream>
using namespace std;

class person
{
  char name[20];
  int age=0;
  public:
    person()
    {
        cout<<"person constructor.."<<endl;
    }
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void show()
    {
     cout<<"Detail's: "<<endl;
     cout<<"Name: "<<name<<endl;
     cout<<"Age: "<<age<<endl;
    }
    ~person()
    {
        cout<<"person descutor.."<<endl;
    }
};

class employee
{
    protected:
    float salary;
    public:
    employee()
    {
        cout<<"employee constructor.."<<endl;
    }
    void emp_input()
    {
        cout<<"Enter salary:";
        cin>>salary;
    }
    void emp_show()
    {
     cout<<"Salary: "<<salary<<endl;
    }
    ~employee()
    {
        cout<<"employee descutsor.."<<endl;
    }
    
};

class manager:public employee,public person
{
    char dept[10];
  public:
      manager()
      {
          cout<<"Manager constructor.."<<endl;
      }
      void input_dep()
      {
          input();
          emp_input();
          cout<<"Enter Dept: ";
          cin>>dept;
      }
      void show_mang()
      {
          cout<<"____________________"<<endl;
          show();
          emp_show();
          cout<<"Dept: "<<dept<<endl;
      }
      ~manager()
      {
          cout<<"Manager descutsor.."<<endl;
      }
};

int main()
{
    cout<<"MUlitple_inhertance"<<endl;
    
    manager obj;
    obj.input_dep();
    obj.show_mang();
}
