#include <stdio.h>

struct Athlete {
    char * name;
    char * country;
    float record;
};

char * getName(struct Athlete * athletes, int size) {
    float max = athletes[0].record;
    char * name = athletes[0].name;
    for (int i = 1; i < size; i++) {
        if (athletes[i].record > max) {
            max = athletes[i].record;
            name = athletes[i].name;
        }
    }
    return name;
}

int main() {
    struct Athlete athletes[] = {
        {"John", "USA", 45.8},
        {"Anna", "France", 22.3},
        {"Tom", "Canada", 22.4}
    };
    printf("%s\n", getName(athletes, 3));
    return 0;
}