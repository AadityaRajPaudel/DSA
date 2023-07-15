// implementation of linear queue

#include<iostream>
using namespace std ;

void enqueue(int * queue, int value, int & front, int & rear, int & size){
    if (front == -1) {
        front = 0; rear = 0;
        queue[rear] = value ;
    }
    else if (rear == (size-1)) {
        cout<<"\nQueue is full !!";
    }
    else {
        queue[++rear] = value ;
    }
}

void dequeue(int * queue, int & front, int & rear, int & value) {
    if (front == -1) cout<<"\nQueue is empty, can't dequeue";
    else if (front == rear) {
        front = -1; rear = -1 ;
    }
    else {
        front++ ;
    }
}

void display(int * queue, int & front, int & rear){
    for (int i = front; i <= rear; i++) {
        cout<<" "<<queue[i] ;
    }
}

int main (){
    int queue[10],flag = true, value, choice, front = -1, rear = -1, size = 10 ;
    while (flag) {
        cout<<"Enter the options: \n1. Enqueue\n2.Dequeue\n3.Display\n4.Exit\n -->";
        cin>>choice ;
        switch (choice) {
            case 1:
                cout<<"\nEnter value to enqueue: ";
                cin>>value ;
                enqueue(queue, value, front, rear, size) ;
                break ;
            case 2:
                dequeue(queue, front, rear, size) ;
                break ;
            case 3 :
                display(queue, front, rear);
                break;
            case 4:
                flag = false ;
                break ;
            default:
                cout<<"\nEnter valid value";
                break ;
        }
    }
    return 0 ;
}