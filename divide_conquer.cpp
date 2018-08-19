#include <iostream>
#include <stdio.h>

int divide_conquer(int ary[], int a, int b, int target){
  int mid = ((b-a)/2) + a;
  int index;
  if(ary[mid] > target){
    mid = divide_conquer(ary, a, mid, target);
  }
  else if(ary[mid] < target){
    mid = divide_conquer(ary, mid+1, b, target);
  }

  return mid;
}

// int divide_conquer(int ary[], int a, int b, int target){
//   printf("here\n" );
//   int mid = ((b-a)/2) + a;
//   int index;
//   if(ary[mid] == target)
//     return mid;
//   else if(ary[mid] > target){
//     return divide_conquer(ary, a, mid-1, target);
//   }
//
//   return divide_conquer(ary, mid+1, b, target);
// }

int main(){
  int ary[] = {2, 3, 6, 9, 20, 23, 25, 29, 30, 35, 57, 62, 70};
  int len = sizeof(ary)/sizeof(int);
  printf("len = %i\n", len);
  int index=divide_conquer(ary, 0, len-1, 31);
  printf("index = %i\n", index);
  return 0;
}
