#include<iostream>
#include<cstdlib>
using namespace std;

/*Child function overrides parent function.*/

class par 
{
    int x;
    public:
    void input(int a)
    {
        x=a;
        cout<<"value(form parent): "<<x<<endl;
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
   void input(int a)
   {
       x=a;
       cout<<"value form child(x): "<<x<<endl;
   }
   ~child()
   {
       cout<<"child descourtor"<<endl;
   }
};

int main()
{
    child obj;
    
    obj.input(10);
    
}




