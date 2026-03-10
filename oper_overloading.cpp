Internally the compiler converts it to:

t1.operator+(t2)

So inside the function:

this object = t1
parameter a = t2

Therefore:

x = 10
a.x = 20

  #include<iostream>
using namespace std;

class test{
  int x;
  public:
  test(int a)
  {
      x=a;
  }
  test operator+(test a)
  {
      test tem(0);
      tem.x=a.x+x;
      
      return tem;
  }
  
  void show()
  {
      cout<<"res: "<<x<<endl;
  }
};


int main()
{
    test t1(20);
    test t2(130);
    
    test t3=t1+t2;
    
    t3.show();
    
}
