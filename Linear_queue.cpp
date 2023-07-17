// Enqueue and Dequeue in linear queue

#include <iostream>
using namespace std; 

void enqueue(int * queue, int value, int & front, int & rear, int & size) {

    if (rear == (size-1)) cout<<"\nQueue is full, cannot add.";

    else if (rear == -1 && front == -1) { // if queue is empty
        front = 0;
        queue[++rear] = value ;
    }
    else {
        queue[++rear] = value ;
    }
}
void dequeue(int * queue, int & front, int & rear) {
    if (rear == -1 && front == -1) cout<<"\nQueue is empty, cannot remove.";

    else if (rear == front) { // if there is only an element in queue
        rear = -1 ;
        front = -1 ;
    }
    else {
        front++;
    }
}
void display(int * queue, int & front, int & rear) {
    cout<<"\nThe queue is: ";
    for (int i = front; i <= rear; i++) {
        cout<<"\t"<<queue[i];
    }
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
                dequeue(queue, front, rear);
                break;
            case 3:
                display(queue, front, rear);
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