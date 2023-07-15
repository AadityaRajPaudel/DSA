// stack implementation of push and pop

#include <iostream>
using namespace std ;

void push (int * stack, int value, int & tos) {
    stack[++tos] = value ;
}

void pop (int * stack, int & tos) {
    tos-- ;
}

void display (int * stack, int & tos) {
    cout<<"\nThe stack in FILO order is : \n";
    for (int i = tos; i >= 0; i--) {
        cout<<stack[i]<<"\t" ;
    }
}

int main () {

    int stack [10] = {11, 22, 33, 44, 55} ;
    int tos = 4 ;
    push (stack, 66, tos);
    push (stack, 77, tos);
    pop (stack, tos) ;
    display(stack, tos) ;

    return 0 ;
}
