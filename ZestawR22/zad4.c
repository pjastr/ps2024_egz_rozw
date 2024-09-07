#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

void changeZeroToMax(struct node * head) {
    if (head->next == NULL) {
        return;
    }
    struct node * current = head->next;
    int max = current->a;
    while (current != NULL) {
        if (current->a > max) {
            max = current->a;
        }
        current = current->next;
    }
    current = head->next;
    while (current != NULL) {
        if (current->a == 0) {
            current->a = max;
        }
        current = current->next;
    }
}

void printList(struct node * head) {
    struct node * current = head->next;
    while (current != NULL) {
        printf("%d, ", current->a);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct node * list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));
    list->next->a = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->a = -5;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->a = 0;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->a = 3;
    list->next->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->next->a = 6;
    list->next->next->next->next->next->next->next = NULL;
    printList(list);
    changeZeroToMax(list);
    printList(list);
    return 0;
}