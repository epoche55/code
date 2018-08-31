#include <iostream>
#include <stdio.h>

#define SEC_PER_YEAR (60*60*24*365)
#define MIN(a,b) (a<b? a : b)

int main(){

  int a = 2;
  a = a | 4;
  printf("%i\n",a );

  a = a & 3;
  printf("%i\n",a );

  short top, bottom;

  bottom = SEC_PER_YEAR;

  top = SEC_PER_YEAR >> 16;

  printf("%x. %x %x\n", SEC_PER_YEAR, top, bottom);

  printf("MIN: %i\n", MIN(5,4) );

  int b = 3;
//  myLimit(b);
  printf("b = %i\n", b);

  return 0;
}
