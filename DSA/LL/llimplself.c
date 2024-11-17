#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *start;

void add_start(int data){
    Node *p = (Node*)malloc(sizeof(Node));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    p->data = data;
    p->next = start;
    start = p;
}

void add_last(int data){
    Node *temp = start;

    if (start == NULL){
        start = (Node*)malloc(sizeof(Node));
        start->next = NULL;
        start->data = data;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = (Node*)malloc(sizeof(Node));
    temp->next->data = data;
    temp->next->next = NULL;
}

void show(){
    Node *temp = start;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    start = NULL;

    add_start(2);
    add_start(6);
    add_last(4);

    show();
}
