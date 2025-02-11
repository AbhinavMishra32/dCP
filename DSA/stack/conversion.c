#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top;

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == SIZE - 1;
}

int push(int digit)
{
    if (!isFull())
    {
        stack[++top] = digit;
    }
}

void show()
{
    int i = 0;
    if (!isEmpty())
    {
        while (i <= top)
        {
            printf("%d", stack[i++]);
        }
    }
}

void pop()
{
    if (!isEmpty())
        return stack[top--];
}

void convert(int num, int base)
{
}

int main()
{
    top = -1;
}