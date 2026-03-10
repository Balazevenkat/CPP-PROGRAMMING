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
    test operator-(test a)
    {
        test tem(0);
        tem.x=a.x-x;
        
        return tem;
    }
    void operator++()
    {
        ++x;
        cout<<"incremaentd"<<endl;
    }
     void show()
     {
         cout<<"upadted: "<<x<<endl;
     }
 };

int main()
{
    test t1(10);
    test t2(10);
    
    t1.compare(t2);
    
    test t3(20);
    test t4(30);
    
    if(t3==t4)
    {
        cout<<"eqaul"<<endl; 
    }
    else
     cout<<"not eqaul"<<endl;
     
     
     test t5(59);
     
     ++t5;
     
     t5.show();
     
     test t7(0);
     
     t7=t3-t4;
     
     t7.show();
     
     
}
