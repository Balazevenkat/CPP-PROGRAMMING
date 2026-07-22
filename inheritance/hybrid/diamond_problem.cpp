#include<iostream>
using namespace std;

class person
{
    protected:
  char name[20];
  int id;
  public:
  virtual void input()=0;
  virtual void display()
  {
  };
};

class tech:virtual public person
{
  public:
  void input()
  {
      cout<<"Enter teacher detail: "<<endl;
      cout<<"Enter naem ";
      cin>>name;
      cout<<"ID ";
      cin>>id;
  }
  void display()
  {
      cout<<"Techer detalis: "<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
  }
};

class student:virtual public person
{
      public:
  void input()
  {
      cout<<"Enter student detail: "<<endl;
      cout<<"Enter naem ";
      cin>>name;
      cout<<"ID ";
      cin>>id;
  }
  void display()
  {
      cout<<"student detalis: "<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
  }
};

class perfrom:public tech,public student
{
  public:
  void input()
  {
      tech::input();
      student::input();
      cout<<"********************"<<endl;
  }
  void display()
  {
      cout<<"perform.."<<endl;
      tech::display();
      student::display();
      cout<<"good job"<<endl;
  }
};

int main()
{
    perfrom obj;
    obj.input();
    obj.display();
    
}
