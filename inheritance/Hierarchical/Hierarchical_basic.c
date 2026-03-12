//one parent(base) two child derived 
/*ne base class → multiple derived classes

Diagram
      A
     / \
    B   C

A → Base class (Parent)

B → Derived class
C → Derived class

Both B and C inherit from A.*/

#include<iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void input()
    {
        cout<<"Enter roll number: ";
        cin>>roll;
    }
};

class ECE : public Student
{
public:
    void show_ece()
    {
        cout<<"ECE Student Roll: "<<roll<<endl;
    }
};

class Sports : public Student
{
public:
    void show_sports()
    {
        cout<<"Sports Student Roll: "<<roll<<endl;
    }
};

int main()
{
    ECE e;
    e.input();
    e.show_ece();

    Sports s;
    s.input();
    s.show_sports();
}
