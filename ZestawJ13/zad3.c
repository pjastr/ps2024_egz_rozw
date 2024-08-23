#include <stdio.h>
#include <stdlib.h>

struct Ksiazka {
    char autor[20];
    int rok;
    float ocena;
};

int najwyzsza_ocena(struct Ksiazka ksiazki[], int n) {
    int rok = ksiazki[0].rok;
    float ocena = ksiazki[0].ocena;
    for (int i = 1; i < n; i++) {
        if (ksiazki[i].ocena > ocena) {
            ocena = ksiazki[i].ocena;
            rok = ksiazki[i].rok;
        } else if (ksiazki[i].ocena == ocena && ksiazki[i].rok < rok) {
            rok = ksiazki[i].rok;
        }
    }
    return rok;
}

int main() {
    struct Ksiazka ksiazki[] = {
        {"Autor1", 2000, 5.0},
        {"Autor2", 2001, 4.5},
        {"Autor3", 2002, 5.0},
        {"Autor4", 2003, 4.0},
        {"Autor5", 2004, 5.0},
    };
    printf("%d\n", najwyzsza_ocena(ksiazki, 5));
    return 0;
}