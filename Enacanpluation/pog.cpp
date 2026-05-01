#include<iostream>
using namespace std;

class BankAccount
{
    char name[20];
    int acc;
    double balance;   // private data

public:
    void input()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account No: ";
        cin>>acc;
        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void deposit(double amt)
    {
        balance += amt;
    }

    void withdraw(double amt)
    {
        if(amt > balance)
            cout<<"Insufficient balance ❌"<<endl;
        else
            balance -= amt;
    }

    void display()
    {
        cout<<"\nAccount Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Acc: "<<acc<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount obj;

    obj.input();

    obj.deposit(500);     // test
    obj.withdraw(2000);   // test

    obj.display();
}
