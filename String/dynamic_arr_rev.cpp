#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

void revers_arr(int *arr,int n)
{
    int *lef=arr, *rig=arr+n-1;
    while(lef<rig)
    {
      //*lef ^= *rig ^= *lef ^= *rig;
        *lef = *lef ^ *rig;
        *rig = *lef ^ *rig;
        *lef = *lef ^ *rig;

        lef++;
        rig--;
    }
}

int main()
{
    int *arr = nullptr;
    int s;
    cin >> s;

    arr = (int*)malloc(s * sizeof(int));

    srand(time(0));

    for(int i=0; i<s; i++)
    {
        arr[i] = rand() % (50 - 10 + 1) + 10;

        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                i--;
                break;
            }
        }
    }

    for(int i=0;i<s;i++)
        cout << arr[i] << " ";
    cout << endl;

    revers_arr(arr, s);

    for(int i=0;i<s;i++)
        cout << arr[i] << " ";
}
