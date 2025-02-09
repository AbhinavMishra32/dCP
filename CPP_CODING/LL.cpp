#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtLast(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void printLL(Node* LL){
    while(LL != NULL){
        printf("%d \n", LL->data);
        LL = LL->next;
    }
}


int main(){
    Node* head = nullptr;

    insertAtLast(head, 5);
    insertAtLast(head, 6);
    printf("printing the list: \n");
    printLL(head);
    getchar();
}