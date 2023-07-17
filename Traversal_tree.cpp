#include <iostream>
using namespace std ;

struct Node {
  int value ;
  Node * left ;
  Node * right ;
};

Node * createNode(int val) {
  Node * n = new Node();
  n -> value = val ;
  return n ;
}

void preOrder(Node * root) {
  if(root == NULL) {
    return ;
  }
  cout<<root->value<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
void inOrder(Node * root) {

}
void postOrder(Node * root) {

}

int main () {

  Node * root = createNode(10) ;
  root -> left = createNode(20);
  root -> right = createNode(30);
  root -> left -> left = createNode(40);

  preOrder(root);
  inOrder(root);
  postOrder(root);


  
  return 0;
}