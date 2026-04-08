#include<iostream>
using namespace std;

int main()
{
    int *arr=nullptr;
    
    int n;
    cin>>n;
    arr=new int[n];
    //arr=(int*)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<endl;
    int max=0,cnt=0,res;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
                 cnt++;
        }
        if(max<cnt)
        {
          max=cnt;
          res=arr[i];
        }
    }
    
    cout<<"Max: "<<res<<endl;;
}





