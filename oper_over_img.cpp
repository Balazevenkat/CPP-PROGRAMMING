#include<iostream>
using namespace std;

class test{
    
    int real;
    int img;
    public:
    test(int a,int b)
    {
        cout<<"assigned"<<endl;
        real=a;
        img=b;
    }
    
    test operator+(test a)
    {
        test tem(0,0);
        
        tem.real=a.real+real;//internally this object refer to t1 down in main and addd here in part of real same with img
        tem.img=a.img+img;
        
        return tem;
    }
    
    void show()
    {
        cout<<"res: "<<real<<"+"<<img<<"j"<<endl;
    }
};

int main()
{
    test t1(10,1);
    test t2(11,2);
    
    test t3=t1+t2;
    
    t3.show();
}
