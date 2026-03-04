#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void find_hig_shig(int *arr)
{
    int i=0;
    int hig=0,shig=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]>hig)
        {
            shig=hig;
            hig=arr[i];
        }
        else if(arr[i]<hig && arr[i]>shig)
        {
            shig=arr[i];
        }
    }
    
    cout<<"high: "<<hig<<" "<<"shig: "<<shig<<endl;
    
    
}

int main()
{
    srand(time(nullptr));
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
        arr[i]=rand()%(10-1+1)+1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                i--;
                break;
            }
        }
    }
    
    cout<<"Elements: ";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
    
    find_hig_shig(&arr[0]);//find_hig_shig(arr);
    
    return 0;
}
