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

void insert_after(Node *Q, int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = data;
    temp->next = Q->next;
    Q->next = temp;
}

void insert_after_data(int target_data, int new_data){
    Node *temp = start;
    while(temp != NULL && temp->data != target_data) temp = temp->next;

    if (temp != NULL) {
        insert_after(temp, new_data);
    } else {
        printf("Node with data %d not found\n", target_data);
    }
}

void delete_after(Node *Q){
    Node *temp = Q->next;
    if (temp == NULL){
        printf("Not possible \n");
        return;
    }
    Q->next = Q->next->next;
    free(temp);
}

void delete_after_data(int data){
    Node *temp = start;
    while(temp->data != data && temp != NULL) temp = temp->next;

    if (temp != NULL)
        delete_after(temp);
    else
        printf("Node with data %d not found\n", data);
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
    insert_after_data(6, 252);
    delete_after_data(4);

    show();
}
