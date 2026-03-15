#include<iostream>
using namespace std;
class con_des
{
  int d1,d2;
  public:
  con_des(con_des &a)
  {
      cout<<"defalut constructor.."<<endl;
      d1=a.d1;
      d2=a.d2;
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
    con_des obj(obj);
     obj.print();
}
