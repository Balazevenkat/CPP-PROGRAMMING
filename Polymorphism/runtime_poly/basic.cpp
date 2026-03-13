Example:

#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout<<"Drawing Shape"<<endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout<<"Drawing Circle"<<endl;
    }
};

int main()
{
    Shape *ptr;
    Circle c;

    ptr = &c;

    ptr->draw();
}

Output:

Drawing Circle

Now the derived function runs.

4️⃣ Why It Works

Because of virtual mechanism.

The compiler creates something called:

VTable (Virtual Table)
5️⃣ Internal Working (Important)

Each class with virtual functions has:

Virtual Table (vtable)

Each object contains:

vptr (virtual pointer)

Structure:

Object
 └── vptr → points to vtable

Example:

Shape vtable
-------------
draw()

Circle vtable
-------------
draw()

At runtime:

ptr → Circle object
vptr → Circle vtable

So:

Circle::draw() is called
6️⃣ Important Rule

Run-time polymorphism works only with:

Base class pointer/reference
Derived class object
Virtual function

Example:

Shape *ptr;
Circle c;

ptr = &c;
ptr->draw();
