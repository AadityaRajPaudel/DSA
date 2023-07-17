// Push and Pop array from any given position

#include <iostream>
using namespace std; 

void push(int value, int position, int * array, int & ele) {
    
        for (int i = ele; i >= position; i--) { // shifting every element from inserting position to last position to right by 1 step
            array[i+1] = array[i];
        }
        array[position] = value;
        ele ++ ;
    
}

void pop (int position, int * array, int & ele) {
    if (ele == 0) cout<<"Can't pop an empty array!";
    else {
        for (int i = position; i< ele; i++) {
            array[position] = array[position + 1];
        }
        ele --;
    }
}

void display(int * array, int & ele) {
    cout<<"\nThe array is { " ;
    for (int i = 0; i < ele; i++) {
        cout<<array[i];
        cout<<"\t";
    }
}

int main () {
    
    int array[5] = {10, 20, 30, 40};
    int ele = 5 ;
    push (10, 3, array, ele);
    pop (1, array, ele);
    display(array, ele);

    return 0;
}