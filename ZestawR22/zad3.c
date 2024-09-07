#include <stdio.h>
#include <string.h>

struct Ksiazka {
    char * tytul;
    int isbn;
};

int getMinISBN(struct Ksiazka * ksiazki, int n) {
    int najkrotszy = 0;
    for (int i = 1; i < n; i++) {
        if (strlen(ksiazki[i].tytul) < strlen(ksiazki[najkrotszy].tytul)) {
            najkrotszy = i;
        }
    }
    return ksiazki[najkrotszy].isbn;
}

int main() {
    struct Ksiazka ksiazki[] = {
        {"Ksiazka 1a", 123},
        {"Ksiazka 2aa", 456},
        {"Ksiazka 3aaa", 789},
        {"Ksiazka4", 101112}
    };
    printf("%d\n", getMinISBN(ksiazki, 4));
    return 0;
}