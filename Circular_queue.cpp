// Enqueue and Dequeue in circular queue

#include <iostream>
using namespace std; 

void enqueue(int * queue, int value, int & front, int & rear, int & size) {

    if (front == (rear+1)%size) cout<<"\nQueue is full, cannot add.";

    else if (rear == -1 && front == -1) { // if queue is empty
        front = 0;
        queue[++rear] = value ;
    }
    else {
        rear = (rear+1)%size ;
        queue[rear] = value ;
    }
}
void dequeue(int * queue, int & front, int & rear, int & size) {
    if (rear == -1 && front == -1) cout<<"\nQueue is empty, cannot remove.";

    else if (rear == front) { // if there is only an element in queue
        rear = -1 ;
        front = -1 ;
    }
    else {
        front = (front+1)%size;
        
    }
}
void display(int * queue, int & front, int & rear, int & size) {
    cout<<"\nThe queue is: ";
    int i = front ;
    do {
        
        cout<<"\t"<<queue[i];
        i = (i+1)%size;
    }while ((i-1) != rear);
}



int main (){

    int queue[10] = {10, 20, 30, 40};
    int front = 0 ;
    int rear = 3 ;
    int size = 10 ;
    int choice, value ;
    bool flag = true;

    while (flag){
        cout<<"\nEnter 1 to Enqueue, 2 to Dequeue and 3 to display, 4 to Exit: ";
        cin>>choice ;

        switch (choice) {
            case 1:
                cout<<"\nEnter value to enqueue: ";
                cin>>value;
                enqueue(queue, value, front, rear, size);
                break;
            case 2:
                dequeue(queue, front, rear, size);
                break;
            case 3:
                display(queue, front, rear, size);
                break;
            case 4:
                flag = false ;
                break ;
            default:
                flag = false;
                break;
        }
    }
    

    return 0;
}