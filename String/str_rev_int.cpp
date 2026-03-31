#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

void revers_str(char *ptr)
{
    char*lef=ptr,*rig=ptr+strlen(ptr)-1;
    while(lef<rig)
    {
        if(*lef!=*rig)
        {
            *lef^=*rig^=*lef^=*rig;
        }
        lef++;
        rig--;
    }
}

int main()
{
    int n;
    char *str=nullptr;
    cout<<"Enter size: ";
    cin>>n;
    cin.ignore();
    
    str=(char*)malloc(n);
    cout<<"Enter str: ";
    fgets(str,n,stdin);
    str[strlen(str)-1]='\0';
    
    revers_str(str);
    cout<<str<<endl;
    cout<<"Enter the integer.."<<endl;
    int num;
    cin>>num;
    
    while(num)
    {
        cout<<num%10;
        num/=10;
    }
    
    
}
