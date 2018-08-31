#include <iostream>
#include <stdio.h>

#define dps struct node*

struct node{
  int data;
};

int main(){

  typedef struct node* testing;
  typedef int healthPts;
  typedef int manaPts;
  typedef int error_;

  dps anothernode;
  testing newnode;
  newnode->data = 5;
  //anothernode->data = 6;
  //printf("%i    %i\n", newnode->data, anothernode->data );

  healthPts hp = 4;
  manaPts mp = 50;
  error_ compilation = 1;
  error_ success = 0;

  return 0;
}

// _interrupt double compute_area (double radius)
// (
//   double area = PI * radius * radius;
//   printf(“\nArea = %f”,area);
//   return area;
// )
