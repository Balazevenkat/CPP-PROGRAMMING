#include<iostream>
using namespace std;


class shape
{
  public:
  shape()
  {
      cout<<"shape const.."<<endl;
  }
  void virtual input()=0;
   void virtual display()=0;
  virtual ~shape()                           //---------------> we need to use the virtual for the base deconstructor to note the circle deconstruto
  {
      cout<<"shape de-cons"<<endl;
  }
};
class circle:public shape 
{
    int rad;
    public:
    circle()
    {
        cout<<"circle const"<<endl;
    }
    void input()
    {
        cout<<"\n Enter radius: ";
        cin>>rad;
    }
    void display()
    {
        cout<<"\n circle \n";
        cout<<"Result: "<<(2*(rad*rad)*3.14)<<endl;
    }
  ~circle()
    {
        cout<<"circle de-constr"<<endl;
    }
};

class squr:public shape
{
    int s;
    public:
    squr()
    {
        cout<<"sqaure constr..."<<endl;
    }
    void input()
    {
        cout<<"Enter side for square: "<<endl;
        cin>>s;
    }
    void display()
    {
        cout<<"Detalis of square: "<<endl;
        cout<<"Area: "<<(s*s)*(s*s);
    }
    ~squr()
    {
        cout<<"squr de-constr..."<<endl;
    }
    
};


int main()
{
    shape *ptr;
    
    
    
    ptr=new circle;
    
    ptr->input();
    
    ptr->display();
    
    delete ptr;
    
    
}
