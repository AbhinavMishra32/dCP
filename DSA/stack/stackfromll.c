#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int isEmpty(Node* top){
    if (top == NULL) return 1;
    else return 0;
}

int isFull() {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL){
        printf("Stack Overflow\n");
        return 1;
    }
    free(temp);
    return 0;
}

void push(Node** top, int data) {
    if (!isFull()){
        Node* temp = (Node*)malloc(sizeof(Node));
        if (temp == NULL) {
            printf("Memory allocation failure");
        }
        temp->data = data;
        temp->next = *top;
        *top = temp;
    }
}

void pop(Node** top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        return;
    }
    Node* temp = *top;
    *top = (*top)->next;
    free(temp);
}

void show(Node** top) {
    if (isEmpty(*top)){
        printf("Stack is empty\n");
        return;
    }
    Node* current = *top;

    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main(){
    Node* top = NULL;
    push(&top, 43);
    push(&top, 56);
    push(&top, 664);
    show(&top);
    pop(&top);
    pop(&top);
    show(&top);
}
