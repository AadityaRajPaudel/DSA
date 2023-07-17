// add two polynomials
#include<iostream>
using namespace std ;

struct Node {
    int coeff ;
    int exp ;
    Node * next ;
};

void display (Node *& head) {
    Node * p = head ;
    while (p != NULL) {
        cout<<p->coeff<<"x"<<head->exp ;
        if (p->next != NULL) {
            cout << " + ";
        }
        p = p -> next ;
    }
}

void insert(Node *& head, int c, int e) {
    Node * temp = new Node() ;
    temp -> coeff = c ;
    temp ->exp = e ;
    if (head == NULL) {
        head = temp ;
        temp ->next = NULL ;
        return ;
    }
    Node * p = head ;
    while (p -> next != NULL) {
        p = p->next ;
    }
    p ->next = temp ;
    temp -> next = NULL ;

}

void add (Node *& head1, Node *& head2, Node *& head) {
    Node * h1 = head1 ;
    Node * h2 = head2 ;
    int coeff ;
    
    
    while (h1 != NULL) {
        while(h2 != NULL) {
            if (h1 ->exp == h2 ->exp) {
            coeff = h1->coeff + h2->coeff ;
            insert(head, coeff, h1->exp);
            
            break ;
            }
            h2 = h2 -> next ;
        }
        h1 = h1 -> next ;
    }
    display(head);

}


int main (){
    int i = 1, coefficient, exponent ;
    Node * head = NULL ;
    Node * head1 = NULL ;
    Node * head2 = NULL ;
    while (i) {
        cout<<"\nEnter the coefficient of the first polynomial: ";
        cin>>coefficient ;
        cout<<"\nEnter the exponent: ";
        cin>>exponent ;

        insert(head1, coefficient, exponent);
        cout<<"\nEnter 0 to exit else press any number and enter: ";
        cin>>i ;
    }
    i = 1 ;
    while (i) {
        cout<<"\nEnter the coefficient of the second polynomial: ";
        cin>>coefficient ;
        cout<<"\nEnter the exponent: ";
        cin>>exponent ;

        insert(head2, coefficient, exponent);
        cout<<"\nEnter 0 to exit else press any number and enter: ";
        cin>>i ;
    }

    add(head1, head2, head); // sum is store

}