#include<iostream>
#include<cstdlib>
using namespace std;
#include<string>

int main()
{
    string letters ("12345");
    
    int len=letters.length();
    int pos=0;
    for(char c:letters)
    {
        int space=(len)-(pos+1);
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        for(int i=0;i<pos;i++)
        {
            cout<<letters.at(i);
        }
        cout<<c;
        /*  for(int i=pos-1;i>=0;i--)
        {
            cout<<letters.at(i);
        }*/
        cout<<endl;
        pos++;
    }
}
/*
     1
    12
   123
  1234    */



