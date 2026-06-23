#include<stdio.h>

// Recursion replaces loop, ternary replaces if
void print(int n, int i) {
    (i <= n) && (printf("%d ", i), print(n, i+1));
}

int main() {
    print(10, 1);   // 1 2 3 4 5 6 7 8 9 10
}
