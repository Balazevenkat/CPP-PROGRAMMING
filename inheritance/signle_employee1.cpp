#include<iostream>
#include<cstdlib>
using namespace std;

class emp 
{
  protected:
  int id;
  char name[20];
  
  public:
  emp()
  {
      cout<<"Employee constructor...."<<endl;
  }
  void input()
  {
      cout<<"Enter Name: ";
      cin>>name;
      cout<<"Enter ID: ";
      cin>>id;
  }

  ~emp()
  {
    cout<<"decustor employe..."<<endl;  
  }
  
};

class manager:public emp
{
    private:
    int salary;
    public:
    manager()
    {
        cout<<"manager constructor..."<<endl;
    }
    void getsalary()
    {
          cout<<"salary: ";
        cin>>salary;
    }
    void show()
    {
        cout<<"Employee details:"<<endl;
       cout<<"ID: "<<id<<endl;
      cout<<"Name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
    ~manager()
    {
        cout<<"manager decustor..."<<endl;
    }
};

int main()
{
   manager obj;
   obj.input();
   obj.getsalary();
   obj.show();
}

