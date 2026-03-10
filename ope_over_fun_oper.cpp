#include<iostream>
using namespace std;


 class  test 
 {
   int x;
   public:
   test(int a)
   {
       x=a;
   }
   void compare(test a)
   {
       if(a.x==x)
       {
           cout<<"eqaul"<<endl;
           return;
       }
       cout<<"not eqaul"<<endl;
   }
    int operator==(test a)
    {
        if(a.x==x)
        return 1;
        else
        return 0;
    }
 
 };

int main()
{
    test t1(10);
    test t2(10);
    
    t1.compare(t2);//this object points above in place of x
    
    test t3(20);
    test t4(20);
    
    if(t3==t4)//this object points above in place of x
    {
        cout<<"eqaul"<<endl; 
    }
    else
     cout<<"not eqaul"<<endl;
     
     
}
