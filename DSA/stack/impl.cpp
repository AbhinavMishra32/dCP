#include <iostream>

class Stack
{
    int top;
    int size;
    int *stack;

public:
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        stack = new int[size];
    }

    void push(int data)
    {
        if (top == size)
        {
            std::cout << "Stack is full" << std::endl;
            return;
        }
        stack[++top] = data;
    }

    void pop()
    {
        if (top == -1)
        {
            std::cout << "Stack is empty" << std::endl;
        }
        top--;
    }

    int peek()
    {
        if (top == -1)
        {
            std::cout << "Stack is empty" << std::endl;
        }
        return stack[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void display()
    {
        for (int i = 0; i < top; i++)
        {
            std::cout << stack[i] << " ";
        }
        std::cout << std::endl;
    }
    ~Stack()
    {
        delete[] stack;
    }
};

int main()
{
    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);

    s.display();

    s.pop();

    s.display();

    std::cout << "Top Value: " << s.peek() << std::endl;
};