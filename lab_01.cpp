// Push and pop in an array from any given position

#include <iostream>
#include <math.h>
using namespace std ;


void push (int * array, int value, int position, int & size)  {
    size++ ;
    for (int i = size ; i > position; i--) {
        array[i] = array[i - 1] ;
    }
    array[position] = value ;
}

void pop (int * array, int position, int & size) {
    for (int i = position; i < size; i++) {
        array[i] = array[i + 1] ;
    }
    size -- ;
}

void display(int * array, int & size) {
    cout<<"\nThe array is: \n";
    for (int i = 0; i < size; i++) {
        cout<<array[i]<<"\t" ;
    }
}

int main () {
    int size = 6 ;
    int array[10] = {11, 22, 33, 44, 55, 66} ;
    
    push(array, 88, 2, size) ;
    pop (array, 4, size );
    display(array, size );

    return 0 ;
}