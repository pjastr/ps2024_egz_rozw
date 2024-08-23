#include <stdio.h>
#include <stdlib.h>

int countNegOdd(int **tab, int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab[i][j] < 0 && tab[i][j] % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int ** tab = malloc(2 * sizeof(int *));
    tab[0] = malloc(3 * sizeof(int));
    tab[1] = malloc(3 * sizeof(int));
    tab[0][0] = 3; tab[0][1] = 4; tab[0][2] = -3;
    tab[1][0] = -9; tab[1][1] = 2; tab[1][2] = 11;
    printf("%d\n", countNegOdd(tab, 2, 3));
    free(tab[0]);
    free(tab[1]);
    free(tab);
    return 0;
}