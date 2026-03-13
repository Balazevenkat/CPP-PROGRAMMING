//one child two base classes
//


#include<iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    void input()
    {
        cout<<"Enter value: ";
        cin>>x;
    }
};

class B : public A
{
protected:
    int y;

public:
    void input2()
    {
        cout<<"Enter second value: ";
        cin>>y;
    }
};

class C : public B
{
public:
    void show()
    {
        cout<<"Value of x: "<<x<<endl;
        cout<<"Value of y: "<<y<<endl;
        cout<<"Sum: "<<x+y<<endl;
    }
};

int main()
{
    C obj;

    obj.input();   // from class A
    obj.input2();  // from class B
    obj.show();    // from class C
}
