#include <stdio.h>

void reverse_string(char ary[], int len);

int main(){
  char ary[] = {'M', 'a', 'y'};
  int len = sizeof(ary)/sizeof(char);
  reverse_string(ary, len);
  for (int i = 0; i < len; i++) {
    printf("%c", ary[i]);
  }
  printf("\n" );

  return 0;
}

void reverse_string(char ary[], int len){
  char temp;
  int i;
  int j = len-1;
  int mid = len/2;
  for (i = 0; i < mid; i++) {
    temp = ary[i];
    ary[i] = ary[j];
    ary[j] = temp;
    j--;
    printf("temp = %c\n", temp);
  }
}
