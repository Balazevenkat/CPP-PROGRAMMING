#include<iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int a)
    {
        x = a;
    }

    // Copy Constructor
    Test(const Test &t)
    {
        cout << "Copy constructor called\n";
        x = t.x;
    }

    void show()
    {
        cout << "Value: " << x << endl;
    }
};

int main()
{
    Test t1(10);   // normal constructor
    Test t2 = t1;  // copy constructor

    t1.show();
    t2.show();
   
   /* error 
    cout<<endl;
    Test t1(20);
    //t1(20);
    t1.show();
    t2.show();
    */
}
