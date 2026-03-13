/*t1.input()
t2.input()

operator overloading...

tem destructor        ← local object inside operator+

(program ends)

t3 destructor
t2 destructor
t1 destructor*
*/

#include<iostream>
using namespace std;

class test 
{
    //complex
    int data1,data2;
    public:
    void input()
    {
        cout<<"Enter values:"<<endl;
        cout<<"real_val: ";
        cin>>data1;
        cout<<"imag_val: ";
        cin>>data2;
    }
    test operator+(test &a)
    {
        test tem;
        cout<<"operator overloadding..."<<endl;
        tem.data1=data1+a.data1;
        tem.data2=data2+a.data2;
        //in above right side part normal data1,data2 internally this taken care..
        return tem;
    }
    void show()
    {
        cout<<"\nOUTPUT: "<<endl;
        cout<<data1<<"+"<<data2<<"j"<<endl;
    }
    ~test()
    {
        cout<<"\ntest deconsturctor..."<<endl;
    }
};

int main()
{
    test t1,t2,t3;
    
    t1.input();
    t2.input();
    
    
    t3=t1+t2;
    //t3 = t1.operator+(t2);
    
    t3.show();
}
