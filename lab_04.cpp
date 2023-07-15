// implementation of circular queue

#include<iostream>
using namespace std ;

void enqueue(int * queue, int value, int & front, int & rear, int & size){
    if (front == -1) {
        front = 0; rear = 0;
        queue[rear] = value ;
    }
    else if (front == (rear+1)%size) {
        cout<<"\nQueue is full !!";
    }
    else {
        rear = (rear + 1) % size ;
        queue[rear] = value ;
    }
}

void dequeue(int * queue, int & front, int & rear, int & size) {
    if (front == -1) cout<<"\nQueue is empty, can't dequeue";
    else if (front == rear) {
        front = -1; rear = -1 ;
    }
    else {
        front = (front + 1)% size ;
    }
}

void display(int * queue, int & front, int & rear, int & size){
    do {
        cout<<" "<<queue[front] ;
        front = (front+1)% size ;
    }while (front != rear) ;
}

int main (){
    int queue[5],flag = true, value, choice, front = -1, rear = -1, size = 5 ;
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
                display(queue, front, rear, size);
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