#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    //allocating the memory in dynamically for array...
    int *arr=nullptr;
    
    
    int size;
    cout<<"Enter the arr size: ";
    cin>>size;
    
    arr= new int[size];
    
    for(int i=0;i<size;i++)
    {
        cin>>*(arr+i);
    }
    
    for(int j=0;j<size;j++)
    cout<<*(arr+j)<<" ";
    
    delete arr[];//free dynamically allocated memory..
    
}
