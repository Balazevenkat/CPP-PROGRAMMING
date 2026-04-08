#include<iostream>
using namespace std;

 int missingNumber(int arr[], int n){
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i=0;i<n-1;i++) sum += arr[i];
    return total - sum;
}

int main()
{
   //int arr[]={8,2,4,5,3,1,7};
   
    int arr[]={3,2,1,5};
   
   int res=missingNumber(arr,5);

//   int res=missingNumber(arr,8);
   
   cout<<"Res: "<<res<<endl;
}
