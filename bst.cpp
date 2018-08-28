#include <iostream>
#include <stdio.h>

using namespace std;

struct bstNode{
  int data;
  bstNode* left;
  bstNode* right;

  bstNode(int num){
    data = num;
    left = right = NULL;
  }
};

class bst{
public:
  bstNode* root;
  bst(){
    root = NULL;
  }
  bstNode* insert(bstNode* root, int num){
    if(root == NULL){
      root = new bstNode(num);
    }
    else if(num <= root->data){ // insert left
      root->left = insert(root->left, num);
    }
    else if(num > root->data){ // insert right
      root->right = insert(root->right, num);
    }
    return root;
  }
  bstNode* createBstNode(int num){
    return new bstNode(num);
  }
  void printVertical(){
    for(int i=0; i<=4 ; i++){
      printTree(root, i, 0);
      cout << endl;
    }
  }
  bool searchBst(bstNode* root, int num){
    if (root == NULL)
      return false;
    else if(num == root->data)
      return true;
    else if(num <= root->data)  // search left
      return searchBst(root->left, num);
    else // search right
      return searchBst(root->right, num);
  }
  void printTree(bstNode* root, int line_num, int horiz){
    if(root == NULL)
      return;

    if(line_num == horiz)
      cout << root->data << " " ;

    printTree(root->left, line_num, horiz - 1);
    printTree(root->right, line_num, horiz + 1);
  }
};

int main(){
  bst tree;
  tree.root = tree.insert(tree.root, 10);
  tree.root = tree.insert(tree.root, 20);
  tree.root = tree.insert(tree.root, 4);
  tree.root = tree.insert(tree.root, 6);

  if(tree.searchBst(tree.root, 3))
    printf("found\n" );
  else
    printf("not found\n" );

  tree.printVertical();
  printf("\n" );
  return 0;
}
