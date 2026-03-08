#include<iostream>
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

return 0;
}
