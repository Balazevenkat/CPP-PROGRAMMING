#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int *arr = nullptr;

    int size;
    cout<<"Enter the size: ";
    cin>>size;

    if(size > 10)
    {
        cout<<"Size should be <= 10"<<endl;
        return 0;
    }

    arr = (int*)malloc(size * sizeof(int));

    srand(time(nullptr));

    for(int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 10 + 1;

        for(int j = 0; j < i; j++)
        {
            if(*(arr + j) == *(arr + i))
            {
                i--;   // retry
                break;
            }
        }
    }

    cout<<"Array: ";
    for(int i = 0; i < size; i++)
    {
        cout<<*(arr + i)<<" ";
    }

    free(arr);
}
