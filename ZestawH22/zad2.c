#include <stdio.h>

void printFromLast(int size, int *lastElement) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", lastElement[i]);
    }
}

int main() {
    int size = 5;
    int tab[] = {-3, 9, 3, 7, 12};
    printFromLast(size, tab);
    return 0;