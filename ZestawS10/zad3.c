#include <stdio.h>

union Extra {
    int x;
    double y;
    char z;
};

struct WrapperExtra{
    union Extra extra;
    int type; // 0 - int, 1 - double, 2 - char
};

int main() {
    struct WrapperExtra array[6] = {
        { .extra.x = 1, .type = 0 },
        { .extra.y = 2.0, .type = 1 },
        { .extra.z = 'a', .type = 2 },
        { .extra.x = 3, .type = 0 },
        { .extra.y = 4.0, .type = 1 },
        { .extra.z = 'b', .type = 2 }
    };

    for (int i = 0; i < 6; i++) {
        switch (array[i].type) {
            case 0:
                printf("x: %d\n", array[i].extra.x);
                break;
            case 1:
                printf("y: %f\n", array[i].extra.y);
                break;
            case 2:
                printf("z: %c\n", array[i].extra.z);
                break;
        }
    }

    return 0;
}