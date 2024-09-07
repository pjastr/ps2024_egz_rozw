#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

int checkList(struct node * list1, struct node * list2) {
    int count1 = 0;
    int count2 = 0;
    while (list1 != NULL) {
        if (list1->a % 2 != 0) {
            count1++;
        }
        list1 = list1->next;
    }
    while (list2 != NULL) {
        if (list2->a % 2 != 0) {
            count2++;
        }
        list2 = list2->next;
    }
    return count1 == count2;
}

int main() {
    struct node * list1 = malloc(sizeof(struct node));
    list1->a = 1;
    list1->next = malloc(sizeof(struct node));
    list1->next->a = 8;
    list1->next->next = NULL;
    struct node * list2 = malloc(sizeof(struct node));
    list2->a = 3;
    list2->next = malloc(sizeof(struct node));
    list2->next->a = -5;
    list2->next->next = NULL;
    printf("%d\n", checkList(list1, list2));
}