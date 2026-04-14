#include<iostream>
using namespace std;

/*Postfix
obj--;
matrix operator--(matrix &a, int)

👉 Extra int tells compiler:

This is postfix version
*/


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
    friend matrix operator+(const matrix&,const matrix&);

        friend matrix operator--(matrix&);

};

matrix operator--(matrix&a)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            --a.arr[i][j];
        }
    }
    return a;
}

matrix operator+(const matrix &a,const matrix &b)
{
    matrix tem;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            tem.arr[i][j]=b.arr[i][j]+a.arr[i][j];
        }
    }
    
    return tem;
}

int main()
{
    matrix obj1,obj2,obj3;
    
    obj1.input();
    obj2.input();
    
    obj3=obj1+obj2;
    
    cout<<"*********************"<<endl;
    
    obj3.output();
    
    cout<<"decrment operator"<<endl;
    
    --obj3;
    
    obj3.output();
    
}
