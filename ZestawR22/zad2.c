#include <stdio.h>

int modifier(int number) {
    return number + 1;
}

int modifyAndSum(int (*modifier)(int), int number1, int number2) {
    return modifier(number1) + modifier(number2);
}

int main() {
    int number1 = 5;
    int number2 = 10;
    printf("Suma: %d\n", modifyAndSum(modifier, number1, number2));
    return 0;
}