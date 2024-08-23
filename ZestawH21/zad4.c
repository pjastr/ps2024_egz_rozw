#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

int maximum(struct node * head) {
    if (head->next == NULL) {
        return 0;
    }
    int max = head->next->i;
    struct node * current = head->next;
    while (current != NULL) {
        if (current->i > max) {
            max = current->i;
        }
        current = current->next;
    }
    return max;
}

int main() {
    struct node * list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));
    list->next->i = 4;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 25;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = -7;
    list->next->next->next->next = NULL;
    printf("%d\n", maximum(list));
    return 0;
}