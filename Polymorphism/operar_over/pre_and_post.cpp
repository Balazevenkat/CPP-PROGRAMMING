#include<iostream>
using namespace std;

class matrix
{
    int arr[2][2];
    public:
    void input()
     {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
    void output()
    {
        for(int i=0;i<2;i++,cout<<endl)
        {
            for(int j=0;j<2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
    matrix operator+(matrix &a)
    {
        matrix tem;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                tem.arr[i][j]=a.arr[i][j]+arr[i][j];
            }
        }
        return tem;
    }
    
    friend void operator++(matrix&,int);
    friend void operator++(matrix&);//pre increment
};

void operator++(matrix&a,int )
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            a.arr[i][j]++;
        }
    }
}

void operator++(matrix&a)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            ++a.arr[i][j];
        }
    }
}

int main()
{
    matrix a,b,c;
    
    a.input();
    b.input();
    
    c=a+b;
    
    cout<<"*******************"<<endl;
    
    c.output();
    
    cout<<"post incremate arguments are 2"<<endl;
    
    c++;
    
    c.output();
    
    cout<<"pre incremate argument are 1"<<endl;
    
    ++c;
    
    c.output();
    
}
