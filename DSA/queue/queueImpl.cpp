#include <iostream>

using namespace std;

class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;
    
    public:
        Queue(){
            size = 100;
            arr = new int[size];
            qfront = 0;
            rear = 0;
        }

        bool front(){
            if(qfront == rear){
                return -1;
            }
            return arr[qfront];
        }
        bool empty(){
            return qfront == rear;
        }

        bool isFull(){
            return rear == size;
        }

        void enqueue(int data){
            if (isFull()){
                cout<<"Qeueue is full, cannot enqueue"<<endl;
                return;
            }
            arr[rear] = data;
            rear++;
        }

        int dequeue(){
            if(empty()){
                cout<<"Queue is empty, cannot dequeue"<<endl;
                return 0;
            }
            int p = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear){
                rear = 0;
                qfront = 0;
            }

            return p;
        }

        void show(){
            cout<<"Show:"<<endl;
            for(int i = qfront; i < rear; i++){
                cout<< arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Queue q;
    cout<<q.empty()<<endl;
    q.enqueue(23);
    q.enqueue(12);
    q.enqueue(2);

    q.show();

    cout<< q.dequeue()<<endl;
    cout<<q.empty()<<endl;
}
