#include <stdio.h>
#include <string.h>
#define SIZE 100
#define true 1
#define false 0

int top;
int stack[SIZE];

int isEmpty(){
    return top == -1;
}

int isFull(){
    return top == SIZE -1;
}

void push(char x){
    if(!isFull()){
        stack[++top] = x;
    }
}

char pop(){
    if(!isEmpty()){
        return stack[top--];
    }
    return -1;
}

char peep()
{
    if (!isEmpty())
        return stack[top];
    return -1;
}


void show(char symbol, char *prefix){
    int i = 0;
    printf("%c", symbol);
    printf("\t[");

    for(int j =1; j<=15; j++){
        if(i<=top){
            printf("%c", stack[i++]);
        }
        else {
            printf(" ");
        }
    }
    printf("]");
    printf(" %s\n", prefix);
}

// precedence
int prcd(char op1, char op2)
{
    if (op1 == '$'){
        return true;
    }
    else if (op1 == '*' || op1 == '/'){
        if(op2 == '*' || op2 == '/' || op2 == '%'){
            return false;
        }
        else return true;
    }
    else {
        if (op2 == '+' || op2 == '-'){
            return false;
        }
        else return true;
    }
}

int main(){
    top = -1;
    char infix[SIZE] = "A+(B*C-(D/E$F)*G)*H";
    strrev(infix);

    char postfix[SIZE];
    printf("Infix=%s \n", infix);
    int i,j;
    char symbol;
    i = j =0;

    while(infix[i] != '\0'){
        if(infix[i] == ')')
            infix[i] = '(';

        if (infix[i] == '(')
            infix[i] = ')';
    }

    while(infix[i] != '\0'){
        symbol = infix[i++];
        // or we can use isalnum();
        if(symbol>'a' &&symbol<='z' || symbol >='A' && symbol < 'Z' || symbol>='0' && symbol <='9'){
            postfix[j++] = symbol;
        }
        else if (isEmpty()){
            push(symbol);
        }
        else if(symbol == '('){
            push(symbol);
        }
        else if(symbol == ')'){
            while(!isEmpty() && peep() != '('){
                char x = pop();
                postfix[j++] = x;
            }
            pop(); // removes '(' from stack and doesnt append on postfix
        }
        else{
            while(!isEmpty() && (peep() != '(' && prcd(peep(), symbol))){
                char x = pop();
                postfix[j++] = x;
            }
            push(symbol);
        }
        postfix[i] = '\0';
        show(symbol, postfix);
    }

    while(!isEmpty()){
        char x = pop();
        postfix[j++] = x;
    }
    postfix[j] = '\0';
    printf("\nFinal postfix = %s\n", postfix);
}