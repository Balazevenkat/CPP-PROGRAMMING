#include<iostream>
using namespace std;

class student 
{
  protected:
  int arr[5];
  char name[20];
  int id;
  int sum=0;
  public:
  student()
  {
      cout<<"std const"<<endl;
  }
  void input()
  {
      cout<<"*****************************"<<endl;
      cout<<"Enter detalis..."<<endl;
      cout<<"Name: ";
      cin>>name;
      cout<<"ID: ";
      cin>>id;
      
  }
  void virtual display()=0;
  ~student()
  {
      cout<<"std de-const"<<endl;
  }
};

class marks:virtual public student
{
    public:
    marks()
    {
        cout<<"marks con"<<endl;
    }
    void marks_input()
    {
        cout<<"Enter marks: "<<endl;
        for(int i=0;i<5;i++)
        cin>>arr[i];
        
         for(int i=0;i<5;i++)
      sum+=arr[i];
    }
    ~marks()
    {
        cout<<"marks de cons"<<endl;
    }
    
};

class sports:virtual public student
{
  protected:
  char c;
  public:
  sports()
  {
      cout<<"sports cons"<<endl;
  }
  void sports_input()
  {
      cout<<"Enter gread: ";
       //cout<<"Enter gread: ";
      if(sum==100)
      c='A';
      else
      c='B';
      cout<<"..taken internally.."<<endl;
      cout<<"*******************************"<<endl;
  }
  ~sports()
  {
      cout<<"sports de-cons"<<endl;
  }
};

class res:public marks,public sports
{
  int total;
  public:
  res()
  {
      cout<<"res constr.."<<endl;
  }
  void display()
  {
      cout<<"result..."<<endl;
      
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
      cout<<"Makrks: "<<endl;
      for(int i=0;i<5;i++)
      cout<<i<<'.'<<arr[i]<<endl;
      
      total=sum;
      cout<<"Total: "<<total<<endl;
      cout<<"Grade: "<<c<<endl;
  }
  ~res()
  {
      cout<<"res de-cons"<<endl;
  }
};
int main()
{
    res obj;
    
    obj.input();
    
    obj.marks_input();
    obj.sports_input();
    
    obj.display();
}
