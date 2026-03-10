
#include<iostream>
#include<cstdlib>
using namespace std;

class par 
{
    public:
    par()
    {
        cout<<"parent constcutor"<<endl;
    }
    ~par()
    {
        cout<<"parent descourtor"<<endl;
    }
};

class child:protected par
{
   int x;
   public:
   child()
   {
       cout<<"child constructor.."<<endl;
       cout<<"Enter the value: ";
       cin>>x;
   }
   void show()
   {
       cout<<"value in (child)object"<<endl;
       cout<<"Value: "<<x<<endl;
   }
   ~child()
   {
       cout<<"child descourtor"<<endl;
   }
};

int main()
{
    child obj;
    
    obj.show();
    
}

//first child descourtor



