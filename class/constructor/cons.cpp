#include<iostream>
using namespace std;
class con_des
{
  int d1,d2;
  public:
  con_des()
  {
      cout<<"defalut constructor.."<<endl;
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
    //defalut data of class data_members are 
    con_des obj;
     obj.print();
     
    
}
