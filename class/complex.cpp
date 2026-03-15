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
};

int main()
{
    complex obj;
    obj.input();
    
    cout<<"output"<<endl;
    obj.print();
}
