#include<iostream>
using namespace std;
class con_des
{
  int d1,d2;
  public:
  con_des(int a=0,int b=0)
  {
      cout<<"defalut constructor.."<<endl;
      d1=a;
      d2=b;
  }
  void print()
  {
      cout<<"printing the data..."<<endl;
      cout<<"data1: "<<d1<<endl;
      cout<<"data2: "<<d2<<endl;
  }
};


int main()
{
    
   //con_des obj; //makes zero's
    con_des obj(10,20);//parametersized constructor..
     obj.print();
     
    
}
