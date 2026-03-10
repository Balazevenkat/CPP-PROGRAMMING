#include<iostream>
#include<cstdlib>
using namespace std;


class test 
{
  int m;
  int cm;
  static int cnt;
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
      
      if(tem.cm>=100)
      {
          tem.m+=1;
          tem.cm-=100;
      }
      
      return tem;
  }
  void show()
  {
      cout<<"res:"<<endl;
      cout<<m<<"m"<<" "<<cm<<" "<<"cm"<<endl;
  }
};

int test::cnt;

int main()
{
  test t1(5,50);
  t1.show();
  test t2(3,80);
  t2.show();
  
  cout<<endl;
  test t3=t1+t2;
  
  t3.show();
  
}
