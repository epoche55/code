#include <iostream>
#include <stdio.h>

using namespace std;

int divide_conquer(int ary[], int a, int b, int target){
  int mid = ((b-a)/2) + a;
  int index;
  if(ary[mid] < target){
    mid = divide_conquer(ary, a, mid, target);
  }
  else if(ary[mid] > target){
    mid = divide_conquer(ary, mid+1, b, target);
  }

  return mid;
}

void find_indexs(int ary[], int len, int target, int indexs[]){
  int int1_index = divide_conquer(ary, 0, len, target);
  bool found = false;
  int target2;
  int int0_index;
  while(!found){
    target2 = target - ary[int1_index];
    int0_index = divide_conquer(ary, 0, int1_index, target2);
    if(ary[int0_index] == target2){
      found = true;
      indexs[0] = int0_index;
      indexs[1] = int1_index;
    }
    else if(int1_index > 0)
      int1_index--;
    else
      return;
  }
}

int main(){
  int ary[] = {2,7,11,15};
  int len = sizeof(ary)/sizeof(int);
  int target = 9;
  int indexs [2];
  find_indexs(ary, len, target, indexs);
  cout << indexs << endl;
  return 0;
}
