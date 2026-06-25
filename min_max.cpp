#include<stdio.h>
int main() {
    int a=10, b=20;

    // Method 1: Ternary
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    printf("Max=%d Min=%d\n", max, min);  // Max=20 Min=10

    // Method 2: Arithmetic trick
    int max2 = (a + b + abs(a-b)) / 2;
    int min2 = (a + b - abs(a-b)) / 2;
    printf("Max=%d Min=%d\n", max2, min2); // Max=20 Min=10
}
