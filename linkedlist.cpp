#include <stdio.h>
#include <iostream>

#define LL_LEN 30

using namespace std;

struct Node{
  int num;
  Node *ptr;
  Node (int data){
    num = data;
    ptr = NULL;
  }
};

struct Linkedlist{
  Node *head;
  Linkedlist(){
    head = NULL;
  }
  void print(){
    Node *temp = head;
    while(temp != NULL){
      cout << temp->num << "->";
      temp = temp->ptr;
    }
    printf("NULL\n" );
  }
  void push(int data){
    Node *temp = new Node(data);
    temp->ptr = head;
    head = temp;
  }

  void reverse(){
    Node *next;
    Node *current;
    Node *prev;
    current = head;
    prev = next = NULL;

    if(current->ptr == NULL)
      return;

    while(current != NULL){
      next = current->ptr;
      current->ptr = prev;
      prev = current;
      current = next;
    }
    head = prev;

// old:
    // next = next->ptr;
    // next = next->ptr;
    // current = current->ptr;
    // prev->ptr = NULL;
    //
    // while(current != NULL){
    //   current->ptr = prev;
    //   prev = current;
    //   current = next;
    //   next = next->ptr;
    // }
    // head = current;
  }
};

int main() {
  Linkedlist ll;
  for(int i=1; i<=LL_LEN; i++){
    ll.push(i);
  }
  ll.print();
  ll.reverse();
  ll.print();

  return 0;
}

// void print_ll(node* head){
//   node* print;
//   print = head;
//   while (print != 0){
//     cout << print->num << "->";
//     print = print->ptr;
//   }
//   cout << "NULL" << endl;
// }

// node* build_ll(int len){
//   node *head;
//   // node nary[len];
//   // head = nary;
//   // for(int i=0; i<len;i++){
//   //   if(i+1 == 4){
//   //     nary[i].ptr = 0;
//   //   }
//   //   else{
//   //     nary[i].ptr = &nary[i+1];
//   //   }
//   //   nary[i].num = i+1;
//   // }
//   node n1,n2,n3,n4;
//   n1.ptr = &n2;
//   n2.ptr = &n3;
//   n3.ptr = &n4;
//   n4.ptr = 0;
//   n1.num = 1;
//   n2.num = 2;
//   n3.num = 3;
//   n4.num = 4;
//   head = &n1;
//
//   return head;
// }
