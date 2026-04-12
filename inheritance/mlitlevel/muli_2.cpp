#include<iostream>
using namespace std;

class student 
{
    protected:
    char name[20];
    student()
    {
        cout<<"student constructor.."<<endl;
    }
    void input_name()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
    }
    void stu_out()
    {
        cout<<"Detalis..."<<endl;
        cout<<"Name "<<name<<endl;
    }
    ~student()
    {
        cout<<"student de-constructor.."<<endl;
    }
};

class marks:public student
{
    protected:
  int arr[5];
  public:
  marks()
  {
     cout<<"marks constructor.."<<endl;
  }
  void input_marks()
  {
      cout<<"enter marks: "<<endl;
      for(int i=0;i<5;i++)
      cin>>arr[i];
  }
  void out_mark()
  {
      cout<<"Marks: "<<endl;
      for(int i=0;i<5;i++)
      cout<<i<<'.'<<arr[i]<<endl;
      
  }
  ~marks()
  {
     cout<<"marks de-constructor.."<<endl;
  }
};

class res:public marks
{
  int total=0;
  public:
  res()
  {
      cout<<"res constructor.."<<endl;
  }
  void total_res()
  {
      input_name();
      input_marks();
      cout<<"calculatting.."<<endl;
      for(int i=0;i<5;i++)
      total+=arr[i];
  }
  
  void display()
  {
      stu_out();
      out_mark();
      cout<<"total: "<<total<<endl;
      
  }
  ~res()
  {
      cout<<"res de-constructor.."<<endl;
  }
};

int main()
{
    res obj;
    
    obj.total_res();
    
    cout<<"*************************"<<endl;
    
    obj.display();
    
}
