#include<iostream>
#include<cstdlib>
using namespace std;

class account
{
    protected:
    int acc_no;
    int amount=0;
    public:
    account()
    {
        cout<<"left to right constructor in mutliple inhertance"<<endl;
        cout<<"account constructor...."<<endl;
        cout<<"Enter Account.no: "<<endl;
        cin>>acc_no;
    }
    ~account()
    {
        cout<<"Account deconstructor...."<<endl;
    }
};

class customer
{
    protected:
    string name;
    string addr;
    public:
    customer()
    {
        cout<<"customer constructor...."<<endl;
    }
    ~customer()
    {
        cout<<"customer decoustructor...."<<endl;
    }
};

class bank: public account,public customer
{
    char branch[20];
    public:
    bank()
    {
        cout<<"bank constructor...."<<endl;
    }
    void deposite()
    {
        cout<<"Enter deps(Amount): ";
        cin>>amount;
        
        cout<<"Deposited successfully.."<<endl;
    }
    void withdrwal()
    {
        int num;
        cout<<"Enter amount (Withdrwal): ";
        cin>>num;
        amount-=num;
        cout<<"withdrwal successfully..."<<endl;
        
    }
    void input()
    {
        cout<<"\n Enter detalis: \n"<<endl;
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Address: ";
         //cin.ignore();
        getline(cin,addr);
        cout<<"Enter branch: ";
        cin>>branch;
    }
    void display_detalis()
    {
        cout<<"Detalis :"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"address: "<<addr<<endl;
        cout<<"branch: "<<branch<<endl;
        cout<<"Amount: "<<amount<<endl;
    }
    ~bank()
    {
        cout<<"bank deconstructor.."<<endl;
    }
};

int main()
{
    bank obj;
    obj.input();
    obj.deposite();
    obj.withdrwal();
    
    cout<<"********************************"<<endl;
    
    obj.display_detalis();
}




