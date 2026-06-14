#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

// Typedef for function pointer
typedef int (*FunPtr)(int, int);

int main()
{
    FunPtr ptr;

    ptr = add;
    cout << "Addition: " << ptr(10, 20) << endl;

    ptr = sub;
    cout << "Subtraction: " << ptr(10, 20) << endl;

    return 0;
}
