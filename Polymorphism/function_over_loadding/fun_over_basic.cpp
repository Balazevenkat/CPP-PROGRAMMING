#include<iostream>
#include<cstdlib>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}

int main()
{
    int n1=2,n2=7;
    float m1=2.5,m2=4.7;
    
    cout<<"int ,int: "<<add(n1,n2)<<endl;
    cout<<"float,float: "<<add(m1,m2)<<endl;
}
