#include <stdio.h>

int recursion(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return recursion(n / 2) + 1;
    }
    return recursion(n - 1) + (n-1)/2;
}

int main() {
    printf("%d\n", recursion(0));
    printf("%d\n", recursion(1));
    printf("%d\n", recursion(2));
    printf("%d\n", recursion(3));
    printf("%d\n", recursion(4));
    printf("%d\n", recursion(5));
    return 0;
}