// Stack push and pop
#include <iostream>
using namespace std; 

void push(int * stack, int value, int & tos) {
    if (tos == 4) cout<<"\nCannot push!";
    else {
        stack[++tos] = value;
    }
}

void pop(int & tos) {
    if (tos == -1) cout<<"\nCannot pop!";
    else {
        tos--;
    }
}

void display(int * stack, int & tos) {
    cout<<"\nStack is: ";
    for (int i = tos; i >= 0; i--) {
        cout<<"\t"<<stack[i];
    }
}

int main (){

    int stack[5] = {10, 20, 30, 40, 50};
    int tos = 4 ;
    push(stack, 60, tos);
    pop(tos);
    display (stack, tos);

    return 0 ;
}