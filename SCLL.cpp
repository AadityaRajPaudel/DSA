
#include <iostream>
using namespace std ;

struct Node {
    int value;
    Node * next ;
};

void insertFirst (int val, Node *& head) {
    Node * temp = new Node() ;
    temp -> value = val ;
    if (head == NULL) {
        temp -> next = temp ;
        head = temp ;
    }
    else {
        Node * p = head ;
    while (p -> next != head) { // p sets to last node
        p = p -> next ;
    }
        temp -> next = head ;
    head = temp ;
    p -> next = head ;
    

    }
}
void insertLast (int val, Node *& head) {
    Node * temp = new Node() ;
    temp -> value = val ;
    Node * p = head ;
    while (p -> next != head) { // p sets to last node
        p = p -> next ;
    }
    p -> next = temp ;
    temp -> next = head ;

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
    
    Node * p = head ;
    while (p -> next != head) { // p sets to last node
        p = p -> next ;
    }
    head = head -> next ;
    p -> next = head ;
}

void removeLast(Node *& head){
    Node * p = head ;
    while (p->next->next != head) {
        p = p -> next ;
    }
    p->next = head;
}

void removeNth(Node *& head, int n){
    Node * p = head ;
    while (n > 2) { // p is set to position prior to inserting position
        p = p ->next ;
        n-- ;
    }
    p ->next = p->next->next ;
}

void display(Node * head) {
    Node * p = head ;
    cout<<"\nList is: ";
    while (p -> next != head) {
        cout<<"\t"<<(p->value);
        p = p -> next ;
    }
    cout<<"\t"<<(p->value);
}



int main () {

    Node * head = NULL ;
    

    insertFirst(10, head) ;
    insertFirst(20, head);
    display(head);

    return 0 ;
}