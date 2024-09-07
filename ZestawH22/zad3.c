#include <stdio.h>
#include <string.h>

struct Building {
    char * address;
    int no;
};

struct Building getMinBuilding(struct Building * buildings, int size) {
    struct Building minBuilding = buildings[0];
    for (int i = 1; i < size; i++) {
        if (buildings[i].no < minBuilding.no) {
            minBuilding = buildings[i];
        }
    }
    return minBuilding;
}

int main() {
    struct Building buildings[] = {
            {"AA", 43},
            {"KLM", 22},
            {"PQ", 67}
    };
    struct Building minBuilding = getMinBuilding(buildings, 3);
    printf("Address: %s, No: %d\n", minBuilding.address, minBuilding.no);
    return 0;
}