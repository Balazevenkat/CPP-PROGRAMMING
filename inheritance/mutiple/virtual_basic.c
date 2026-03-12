Virtual mechanism in C++ is used to achieve runtime polymorphism (dynamic binding).
It ensures the correct function is called based on the object type at runtime, not the pointer type.

1️⃣ Basic Idea

When a function is declared virtual in base class, the derived class can override it, and C++ decides which function to call at runtime.

2️⃣ Simple Diagram
Base
 |
Derived

Pointer of base class → object of derived class.

3️⃣ Example Program
#include<iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout<<"Base class function"<<endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout<<"Derived class function"<<endl;
    }
};

int main()
{
    Base *ptr;
    Derived obj;

    ptr = &obj;
    ptr->show();
}
4️⃣ Output
Derived class function
5️⃣ Why?

Pointer type:

Base *

Object type:

Derived

Because show() is virtual, C++ checks the object type at runtime and calls:

Derived::show()
6️⃣ Without Virtual

If virtual is removed:

Base class function

Because compile-time binding happens.

7️⃣ How Virtual Works Internally

C++ creates:

vtable (virtual table)

Each object stores:

vptr → points to vtable

Example:

Object
 |
vptr → vtable → Derived show()
