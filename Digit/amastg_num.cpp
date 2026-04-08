#include<iostream>
using namespace std;

int main()
{
    int n=153;
    int tem=n,sum=0,d;
    while(tem)
    {
        d=tem%10;
        sum+=d*d*d;//digits contained in the number that many d muliples
        
        tem/=10;
    }
    
       if((sum==n))
       cout<<"amstr"<<endl;
       else
       cout<<"not amst";
}
