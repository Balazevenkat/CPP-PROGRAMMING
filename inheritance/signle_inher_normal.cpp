#include<iostream>
#include<cstdlib>
using namespace std;

class person
{
    protected:
  int Id;
  char name[20];
  int age;
  public:
  person()
  {
      cout<<"parent constructor"<<endl;
      cout<<"Enter the details: "<<endl;
      cout<<"Enter ID: ";
      cin>>Id;
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter age: ";
      cin>>age;
  }
  ~person()
  {
      cout<<"person class decustor"<<endl;
  }
};

class student:protected person
{
  public:
  student()
  {
      cout<<"constructor student"<<endl;
  }
  void show()
  {
      cout<<"Detalis of student:"<<endl;
      cout<<"ID: "<<Id<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
  }
  ~student()
  {
      cout<<"decustor student"<<endl;
  }
  
};

int main()
{
    student obj;
    obj.show();
}
