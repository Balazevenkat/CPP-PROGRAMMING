#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int arr[]={2,7,1,4,0};

for(int i=0;i<5;i++)
{
    if(i+1<5 && arr[i]+arr[i+1] == 9)
    {
        cout<<"index's: "<<i<<" "<<i+1<<endl;
    }
}

 string str ={"balla",3};//access for upto 3 index[2]
 
 string str1 ={"azee",3};
 
 
 string strc {str};//only scope upto index[2] because 3
 
 cout<<endl;
 cout<<str<<str1<<endl;

cout<<strc<<endl;
return 0;
}
