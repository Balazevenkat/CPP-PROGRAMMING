Static data members are declared inside the class but 
defined outside the class because they are shared across all objects and require separate memory allocation


#include<iostream>
#include<cstdlib>
using namespace std;


class test 
{
  int m;
  int cm;
  static int cnt;//declared
  public:
  test(int a,int b)
  {
      cnt++;
      cout<<"assigned "<<cnt<<"values"<<endl;
      m=a;
      cm=b;
  }
  test operator+(test a)
  {
      test tem(0,0);
      
      tem.m=a.m+m;
      tem.cm=a.cm+cm;
      
      return tem;
  }
  void show()
  {
      cout<<"res:"<<endl;
      cout<<m<<"m"<<" "<<cm<<" "<<"cm"<<endl;
  }
};

int test::cnt;//defination must in c++

int main()
{
  test t1(4,20);
  t1.show();
  test t2(3,50);
  t2.show();
  
  cout<<endl;
  test t3=t1+t2;
  
  t3.show();
  
}



