#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int *arr=nullptr;
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    arr=(int*)malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++)
    cin>>*(arr+i);
    
    cout<<endl;
    cout<<"array dynamic..";
    for(int j=0;j<size;j++)
    cout<<*(arr+j)<<" ";
    //cout<<arr[j]<<" ";
    
    free(arr);
    //delete arr[];
}
