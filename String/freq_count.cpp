#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void check_frq(char c,char *ptr)
{
   static char ch;
   if(ch!=c)
   ch=c;
   else
   return;
    
    int  cnt=1;
    while(*ptr)
    {
        if(*ptr==ch)
        {
            cnt++;
        }
        ptr++;
    }
    if(cnt>0)
    cout<<c<<cnt<<" ";
    else
    return;
}

int main()
{
    char *str=nullptr;
    
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cin.ignore(); 
    str=(char*)malloc(n*sizeof(char));
    cout<<"entr str: ";
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    char *ptr=str;
    
    for(int i=0;ptr[i];i++)
    {
        check_frq(ptr[i],ptr+i+1);
    }

}
