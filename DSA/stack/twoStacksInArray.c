// Write a program to implement two stacks in an array on opposite ends, stack one's top is -1 and stack two's top is SIZE of stack 1

// the gist is the two stacks are implemented in the same array, one stack starts from the beginning and the other from the end of the array
// the top of stack 1 is -1 and the top of stack 2 is SIZE of stack 1

#include <stdio.h>
#define SIZE 100

typedef struct Stack
{
    int data[SIZE];
    int top;
} stack;

int isEmpty(stack *s)
{
    return s->top == -1;
}

int isFull(stack *s)
{
    return s->top == SIZE - 1;
}

int push(stack *s)
{
    if (!isFull(s))
    {
    }
}