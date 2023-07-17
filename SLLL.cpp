// insert and delete and traverse singly linear linked list

#include <iostream>
using namespace std ;

struct Node {
    int value;
    Node * next ;
};

void insertFirst (int val, Node *& head) {
    Node * temp = new Node() ;
    temp -> value = val ;
    temp -> next = head ;
    head = temp ;

}
void insertLast (int val, Node *& head) {
    Node * temp = new Node() ;
    Node * p = head ;
    temp -> value = val ;
    while (p -> next != NULL) { // p sets to last node
        p = p -> next ;
    }
    p -> next = temp ;
    temp -> next = NULL ;

}
void insertNth (int val, int n, Node *& head) {
    Node * temp = new Node() ;
    temp -> value = val ;
    Node * p = head ;
    while (n > 2) { // p is set to position prior to inserting position
        p = p -> next ;
        n-- ;
    }
    temp -> next = p -> next ;
    p->next = temp ;
}

void removeFirst(Node *& head){
    head = head -> next ;
}

void removeLast(Node *& head){
    Node * p = head ;
    while (p->next->next != NULL) {
        p = p -> next ;
    }
    p->next = NULL;
}

void removeNth(Node *& head, int n){
    Node * p = head ;
    while (n > 2) { // p is set to position prior to inserting position
        p = p ->next ;
        n-- ;
    }
    p ->next = p->next->next ;
}

void display(Node *& head) {
    Node * p = head ;
    cout<<"\nList is: ";
    while (p -> next != NULL) {
        cout<<"\t"<<(p->value);
        p = p -> next ;
    }
    cout<<"\t"<<(p->value);
}



int main () {

    Node * head = NULL ;
    

    insertFirst(10, head) ;
    insertFirst(30, head) ;
    insertFirst(40, head) ;

    insertLast(211, head) ;

    insertNth(50, 2, head);

    removeFirst(head);
    removeLast(head);
    removeNth(head, 2);

    display(head);

    return 0 ;
}