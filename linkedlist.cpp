#include <stdio.h>
#include <iostream>

#define LL_LEN 10

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
    Node *temp = new Node(data);  // TODO: find what this line does.
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
  }

  void reverse(int m, int n){
    int count = 1;
    Node *prev, *current, *next, *f, *l;
    f = l= prev=next=NULL;
    current = head;
    if(current == NULL || (m==n))
      return;

    while(current!=NULL){
      if(count == m){
        f=prev;
        l=current;
      }
      if(count == n){
        l->ptr = next;
        if(f!=NULL){
          f->ptr = current;
        }
        break;
      }
      else if(count >= m){
        prev = current;
        current = next;
        next = current->ptr;
        current->ptr = prev;
      }
      else{
        prev = current;
        current = current->ptr;
        next = current->ptr;
      }
      count++;
    }
  }
};

int main() {
  Linkedlist ll;
  for(int i=1; i<=LL_LEN; i++){
    ll.push(i);
  }
  ll.print();
  //ll.reverse();
  ll.reverse(3,10);
  ll.print();


  return 0;
}
