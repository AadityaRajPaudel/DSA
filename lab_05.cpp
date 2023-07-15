// Linked list linear insert and delete

#include <iostream>
using namespace std ;

struct Node {
    int value ;
    Node * next ;
};

void insert(Node * first, int val, int position) {
    int n ;
    Node * temp =  (Node *) malloc (sizeof(Node));
    temp -> value = val ;
    if (position == 1) {
        temp -> next = first ;
        first = temp ;
    }
    else {
        Node * p = first ;
        while (position > 2) {
            p = p->next ;
            position-- ;
        }
        temp -> next = p->next ;
        p -> next = temp ;
    }
}

void remove(Node * first, int position) {
    Node * p = first ;
    if (p->next == NULL) {
        first = NULL ;
        cout<<"\nNo element remains.";
    }
    else {
        while (position > 2) {
                p = p->next ;
                position-- ;
        }
        p -> next = (p ->next) -> next ;
        free(p->next) ;
    }
    
        
}

int main () {

    int n, val, position, i = 1;
    Node * first = (Node *) malloc (sizeof(Node)) ;
    Node * head = first ;
    first -> value = 10 ; // GUess problem is here
    first -> next = NULL ; //an empty linked list

    
    while (i) {
        cout<<"\nEnter 1 to Enter value, 2 to delete value, 3 to display and 4 to exit: " ;
        cin>>n ;
        switch (n) {
            case 1:
            {
                cout<<"\nEnter the value to insert and its position starting from 1: ";
                cin>>val ;
                cin>>position ;
                insert(first, val, position) ;
                break ;
            }
            case 2:
            {
                cout<<"\nEnter the position to remove: " ;
                cin>>position ;
                remove(first, position) ;
                break ;
            }
            case 3:
            {
                Node * p = first ;
                while (p -> next != NULL) {
                    cout<<" "<<p->value;
                    p = p -> next ;
                }
                break ;
            }
            case 4:
            {
                i = 0 ;
                break ;
            }
            
        }
    }

    return 0 ;
}