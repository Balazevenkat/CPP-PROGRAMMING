#include<iostream>
using namespace std;

class complex
{ 
    int real,img;
    public:
    void input()
    {
        cout<<"real: ";
        cin>>real;
        cout<<"img: ";
        cin>>img;
    }
    void print()
    {
        if(img>0)
        cout<<real<<"+"<<img<<"j";
    }
    
    complex add(complex &a)
    {
        complex tem;
        cout<<"**adding**"<<endl;
        
        tem.real=real+a.real;
        tem.img=img+a.img;
        
        return tem;
    }
    
    complex &mul(complex &a)  //for function using in other files Complex & Complex :: Mul(Complex &a);
    {
        static complex tem;   
        
        tem.real= real*a.real;
        tem.img= img*a.img;
        
        return tem;
    }
};

int main()
{
    complex obj;
    obj.input();
    
    cout<<"output"<<endl;
    obj.print();
    
    cout<<"\nEnter second values"<<endl;
    complex obj1,fobj;
    
    obj1.input();
    
    fobj=obj1.add(obj);
    
    cout<<"final added object"<<endl;
    fobj.print();
    
    fobj=obj.mul(obj1);
    cout<<"\nmultipled object's"<<endl;
    fobj.print();
    
    
    
    
}
