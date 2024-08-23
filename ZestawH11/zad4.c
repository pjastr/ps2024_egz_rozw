#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void printAddressEven(struct node * list) {
    struct node * tmp = list;
    while (tmp != NULL) {
        if (tmp->i % 2 == 0) {
            printf("%p\n", tmp);
        }
        tmp = tmp->next;
    }
}

void printList(struct node * list) {
    struct node * tmp = list;
    while (tmp != NULL) {
        printf("%d %p\n", tmp->i, tmp);
        tmp = tmp->next;
    }
}

int main() {
    struct node * list = malloc(sizeof(struct node));
    list->i = 5;
    list->next = malloc(sizeof(struct node));
    list->next->i = -4;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 6;
    list->next->next->next = NULL;
    printAddressEven(list);
    printList(list);
    return 0;
}