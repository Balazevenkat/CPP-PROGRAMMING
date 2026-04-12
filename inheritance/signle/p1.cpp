#include<iostream>
#include<stdlib.h>
using namespace std;

static int cnt=1;
class subject
{
    //prtect must for use it in drived class 
    protected:
    int arr[5];
    public:
    subject()
    {
        cout<<"subject consttor...\n";
    }
    void input()
    {
        cout<<cnt<<".Enter marks: "<<endl;
        for(int i=0;i<5;i++)
        cin>>arr[i];
        
    }
    void display()
    {
        for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    ~subject()
    {
        cout<<"subject desconstrucor..\n";
    }
};

class student:public subject
{
    public:
    student()
    {
        cout<<"student consttor"<<endl;
    }
    void print()//(subject &a)
    {
        cout<<1<<".stdent(marks)"<<endl;
        display();
    }
    ~student()
    {
        cout<<"stduent deconstutor.."<<endl;
    }
};

int main()
{
    int arr[5];
    student obj;
      
    obj.input();    
    
    obj.print();
}
