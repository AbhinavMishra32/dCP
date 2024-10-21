#include <stdio.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} stack;

void push(stack *s);
void pop(stack *s);
void printStack(stack s);
int isEmpty(stack s);
int isFull(stack s);

int main() {
    int ch;
    stack s;
    s.top = -1;

    while (1) {
        printf("Welcome to Stack Program \n");
        printf("1. Push\n");
        printf("2. Pop \n");
        printf("3. Show\n");
        printf("4. Is Empty \n");
        printf("5. Is Full \n");
        printf("6. Exit \n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push(&s);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                printStack(s);
                break;
            case 4:
                if (isEmpty(s)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 5:
                if (isFull(s)) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Please enter a valid choice.\n");
        }
    }
}

void push(stack *s) {
    if (isFull(*s)) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    int value;
    printf("Enter value to push: ");
    scanf("%d", &value);
    s->data[++(s->top)] = value;
    printf("Pushed %d onto the stack.\n", value);
}

void pop(stack *s) {
    if (isEmpty(*s)) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    int value = s->data[(s->top)--];
    printf("Popped %d from the stack.\n", value);
}

void printStack(stack s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack contents:\n");
    for (int i = 0; i <= s.top; i++) {
        printf("%d ", s.data[i]);
    }
    printf("\n");
}

int isEmpty(stack s) {
    return s.top == -1;
}

int isFull(stack s) {
    return s.top == MAX - 1;
}