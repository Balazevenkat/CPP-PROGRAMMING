throw 10      → catch(int x)
throw 5.5     → catch(double x)
throw 'A'     → catch(char x)
throw "error" → catch(char*)

    



#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try
    {
        if(b==0)
            throw b;

        cout<<"Result: "<<a/b<<endl;
    }
    catch(int x)
    {
        cout<<"Error: Division by zero"<<endl;
    }
}
