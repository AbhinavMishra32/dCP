#include <stdio.h>

#define SIZE 100


int front, rear;
int queque[SIZE];

int isEmpty(){
    return front == -1;
}

int isFull(){
    if((rear+1)%SIZE == front){
        printf("Queue is full\n");
        return 1;
    }
    return 0;
}

void enqueueRear(){
    if(isFull()){
        // printf("Queue is full");
        return;
    }
    int num;
    rear = (rear+1)%SIZE;
    // front will go to first place when we enter value first time, it will stay this uhtil we pop an element from front
    scanf("%d", &num);
    if(front ==-1){
        front++;
    }
    queque[rear] = num;
    printf("%d inserted in the queue at rear\n", num);
}

void enqueueFront(){
    if(isFull()){
        return;
    }
    int num;
    scanf("%d", &num);
    if(front ==-1){
        rear++;
        front++;
    }
    else{
        front = (front -1 +SIZE)%SIZE;
    }
    queque[front] = num;
    printf("%d inserted in the queue at rear\n", num);
}

void dequeueFront(){
    if (isFull()){
        return;
    }
    int num = queque[front];
    if(front == rear){
        front = rear = -1;
    } else{
        front = (front + 1)  % SIZE;
    }
    printf("%d deleted from front", num);
}

void dequeueRear(){
    if(isFull()){
        return;
    }
    int num = queque[rear];
    if(front == rear) front = rear = -1;
    else rear = (rear - 1 + SIZE) % SIZE;

    printf("%d deleted from rear", num);
}

void show(){
    // for(int i =0; i != isFull(); i++){
    //     printf("%d ", queque[i]);
    // }
    int i;
    if (!isEmpty()){
        printf("Elements of Queue:\n");
        i = front;
        while(i !=rear){
            printf("%d ", queque[i]);
            i = (i +1)
        }
    }
}

int getRear(){
    if (!isEmpty()){
        printf("%d is at front", queque[front]);
        return queque[front];
    }
}

int getRear(){
    if(!isEmpty()){
        printf("%d is at rear", queque[rear]);
        return queque[rear];
    }
}

int main(){
    front = rear = -1;

}