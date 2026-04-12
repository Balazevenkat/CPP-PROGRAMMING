#include<iostream>
using namespace std;
class sport
{
    protected:
    char c;
    public:
    sport()
    {
        cout<<"sport const"<<endl;
    }
    void sport_input()
    {
        cout<<"Enter Grade: "<<endl;
        cin>>c;
    }
    ~sport()
    {
        cout<<"sport de-const"<<endl;
    }
};

class student
{
    protected:
    char name[10];
    int arr[5];
    public:
    student()
    {
        cout<<"student constr"<<endl;
    }
    void stduent_input()
    {
        cout<<"ENter name: ";
        cin>>name;
        cout<<"Enter marks: "<<endl;
        for(int i=0;i<5;i++)
        cin>>arr[i];
        
    }
    ~student()
    {
        cout<<"student constr"<<endl;
    }
    
};

class res:public student,public sport
{
  public:
  res()
  {
      cout<<"res constr"<<endl;
  }
  void inp()
  {
      stduent_input();
      sport_input();
  }
  void dis()
  {
  cout<<"reslt..."<<endl;
  cout<<"Name: "<<name<<endl;
   for(int i=0;i<5;i++)
   cout<<i<<'.'<<arr[i]<<endl;
   
   cout<<"Grade: "<<c<<endl;
  
  }
  ~res()
  {
      cout<<"res de-const"<<endl;
  }
};

int main()
{
    res obj;
    
    obj.inp();
    
    cout<<"__________________________"<<endl;
    
    obj.dis();
}
