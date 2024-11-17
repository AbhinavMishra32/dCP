#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *start;

// if list is emtpy then start will point to NULL;

struct Node *create_Node(){
    return (struct Node*)malloc(sizeof(struct Node));
}

void add_node()
{
    struct Node *new_node = create_Node();
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (start == NULL)
    {
        start = new_node;
    }
}

void show(){
    if (start == NULL){
        printf("List is empty");
    }
    else {
        struct Node *temp = start;
        printf("Nodes are: \n");
        while(temp!= NULL){
            printf("%d | %p\n", temp->data, (void*)temp->next);
            temp = temp->next;
        }
   }
}

void add_last(int info){
    struct Node *new_node = create_Node();
    new_node->data = info;
    new_node->next = NULL;

    if (start == NULL){
        start = new_node;
    }
    else {
        struct Node *temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Node added at last\n");
}

void add_beg(){
    int info;
    struct Node *temp = create_Node();
    printf("Enter data for new node: ");
    scanf("%d", &info);
    temp->data = info;

    if (start != NULL){
        temp->next = start;
    }

    start = temp;
    printf("Node added at beginning\n");
}

int main(){
    start = NULL;
    show();

    for (int i =1; i<=10; i++){
        add_beg();
        show();
    }
}