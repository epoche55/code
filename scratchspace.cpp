#include <iostream>
#include <stdio.h>

int function(int a);

int main(){

  int balance[5] = {4,1,7,9,2};
  int j = 5;
  int *pj = &j;
  int **p = &pj;

  int *(a[10]);

  printf("here   %i \n", **p );
  *p = balance;

  printf("here\n" );
  printf("%x   %x    %x\n", balance, *p, **p );

  for(int i=0; i<5; i++){
    *(*a + i) = i;
    printf("%i ", *(*a+i));
  }
  printf("\n\n\n" );

  int (*fary[10])(int);
  fary[0] = function;
  int receive = fary[0](4);

  printf("return: %i\n", receive);

  return 0;
}

int function(int a){
  return 3;
}
