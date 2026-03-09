#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string alpha{"abcdefghijklmnopqrstuvwxyz"};
    
    string key{"QWERTYUIOPASDFGHJKLZXCVBNM"};
    
    string encrpt;
    string decrpt;
    
    string msg;
    cout<<"enter msg: ";//xzb
    getline(cin,msg);
    cout<<endl;
    
    
    
    for(char c:msg)
    {
        size_t postion=alpha.find(c);
        if(postion!=string::npos)
        {
            char new_c=key.at(postion);
            decrpt+=new_c;
        }
        else
        {
            decrpt+=c;
        }
    }
    
    cout<<"decrpted: "<<decrpt;//BMW
}
