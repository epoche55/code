#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  cout << "How long is the array?\n"<< endl;
  int n=5;
  //cin >> n;
  int *dyary = new int[n];

  for(int i=0; i<n ;i++){
    *(dyary+i) = i;
    printf("%i  0x%x\n", dyary[i], &dyary[i] );
  }

  cout << "How long do you want the new array to be?\n" << endl;
  int m=10;
  //cin >> main;
  // resize dynamic array
  // create new array of desired size
  int *bigarray = new int[m];
  // copy old array into new array
  for(int i=0; i<n ; i++){
    bigarray[i] = dyary[i];
    printf("%i  0x%x\n", bigarray[i], &bigarray[i] );
  }

  return 0;
}
