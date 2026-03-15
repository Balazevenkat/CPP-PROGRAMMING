#include<iostream>
using namespace std;

struct data
{
    int x,y;
};

int main()
{
    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try
    {
        if(a!=b)
            throw data{a,b};

        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    catch(data d)
    {
        cout<<"a: "<<d.x<<" b: "<<d.y<<endl;
    }
}
