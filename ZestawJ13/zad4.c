#include <stdio.h>
#include <stdlib.h>

struct element {
    float x;
    struct element * next;
};

float countFloor(float x){
    if (x>0) {
        int i = 0;
        while (i < x) {
            i++;
        }
        return i - 1;
    }
    int i=0;
    while (i>x){
        i--;
    }
    return i;
}

void changeFloor(struct element *head) {
    struct element *current = head->next;
    while (current != NULL) {
        current->x = countFloor(current->x);
        current = current->next;
    }
}

void printList(struct element *head) {
    struct element *current = head->next;
    while (current != NULL) {
        printf("%f\n", current->x);
        current = current->next;
    }
}

int main() {
    struct element * list = malloc(sizeof(struct element));
    list -> next = malloc(sizeof(struct element));
    list -> next -> x = 4.5;
    list -> next -> next = malloc(sizeof(struct element));
    list -> next -> next -> x = -3.4;
    list -> next -> next -> next = malloc(sizeof(struct element));
    list -> next -> next -> next -> x = 2.9;
    list -> next -> next -> next -> next = NULL;
    printList(list);
    changeFloor(list);
    printList(list);
    return 0;
}