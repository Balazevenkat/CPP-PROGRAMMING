#include <iostream>
using namespace std;

class Calculator
{
public:
    // Inline functions
    inline int add(int a, int b)
    {
        return a + b;
    }

    inline int subtract(int a, int b)
    {
        return a - b;
    }

    inline int multiply(int a, int b)
    {
        return a * b;
    }

    inline float divide(float a, float b)
    {
        if (b == 0)
        {
            cout << "Division by zero not possible!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    Calculator calc;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}
