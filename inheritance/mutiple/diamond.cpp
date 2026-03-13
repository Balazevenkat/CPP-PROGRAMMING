

/*
Look at inheritance:

A → B
A → C
B,C → D

So inside D there are two copies of A.

        A
       / \
      B   C
       \ /
        D

Memory of D:

A (from B) → x
A (from C) → x

So compiler gets confused:

Which x ?
B::A::x ?
C::A::x ?

So this line causes ambiguity:

obj.x = 10;

Result:

❌ Compilation Error (Ambiguous)
4️⃣ How to Fix (Method 1)

Specify path:

obj.B::x = 10;
cout << obj.B::x;

or

obj.C::x = 10;

Now compiler knows which A you want.

5️⃣ Real Solution (Virtual Inheritance)

To avoid duplicate A:

class B : virtual public A
{
};

class C : virtual public A
{
};

Now only one copy of A exists.

Memory becomes:

        A
       / \
      B   C
       \ /
        D

But shared A.

Now this works:

obj.x = 10;


*/

#include<iostream>
using namespace std;

class A
{
public:
    int x;
};

class B : public A
{
};

class C : public A
{
};

class D : public B , public C
{
};

int main()
{
    D obj;
    obj.x = 10;
    cout << obj.x;
}
