// reversing a string using stack implementation

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Stack
{
    int top;
    int size;
    T *stack;

public:
    Stack(int n)
    {
        this->size = n;
        this->top = -1;
        stack = new T[size];
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void push(T val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        stack[++top] = val;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return stack[top];
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return stack[top--];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i];
            // cout << "Top: [" << top << "] value: [" << stack[i] << "]" << endl;
        }
        cout << endl;
    }

    int getTop()
    {
        return top;
    }
};
// reversing string:
// int main()
// {
//     string k = "Abhinav";
//     Stack<char> s(k.length());

//     for (int i = 0; i < k.length(); i++)
//     {
//         s.push(k[i]);
//     }
//     cout << "Reversed string using stack:" << endl;

//     for (int i = 0; i < k.length(); i++)
//     {
//         // cout << "Top: " << s.getTop() << endl;
//         cout << s.pop();
//     }
//     cout << endl;
// }

// checking palindrome:

int main()
{
    string k = "aabaa";
    string m;
    Stack<char> s(k.length());

    for (int i = 0; i < k.length(); i++)
    {
        s.push(k[i]);
    }
    int i = 0;
    while (!s.isEmpty())
    {
        if (k[i++] != s.pop())
        {
            break;
        }
    }
    if (s.isEmpty())
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
