#include <stdio.h>

int floorSqrt(int n) {
    int i = 1;
    while (i * i <= n) {
        i++;
    }
    return i - 1;
}

int foo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return foo(n / 2);
    }
    return floorSqrt(n - 1);
}

int main() {
    printf("%d\n", foo(0));
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(5));
    printf("%d\n", foo(10));
    printf("%d\n", foo(15));
    return 0;
}