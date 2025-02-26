#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* link;
} Node;

Node* create(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

void push(Node** head, int data) {
    Node* temp = create(*head, data);
    if (!temp) return;
    temp->link = *head;
    *head = temp;
}

int pop(Node** head) {
    if(*head == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = *head;
    int poppedValue = temp->data;
    *head = temp->link;
    free(temp);
    return poppedValue;
}

int peek(Node* head) {
    if (head == NULL) {
        printf("Stack is empty\n");
        return -1;
    }

    return head->data;
}

void printStack(Node* head) {
    Node* temp = head;
    printf("Stack: \n");
    while(temp) {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

int precedence(char op){
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}


int main(){
    Node* stack = NULL;
    push(&stack, 20);
    push(&stack, 53);
    push(&stack, 23);
    push(&stack, 64);
    pop(&stack);
    pop(&stack);
    printStack(stack);
}
