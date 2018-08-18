#include <stdio.h>
#include <array>

int get_max_profit();

int main(){
//  int sp [] = {10,11,12,13,1,2,9};
  int max = get_max_profit();
  printf("max = %i\n", max);
  return 0;
}

int get_max_profit(){
  int sp [] = {10,9,8,7,5,2,1};
  int len = sizeof(sp)/sizeof(int);
  if(len < 2)
    return 0;

  int min = sp[0];
  int max_profit = sp[1] - sp[0];
  int cp, pp;

  for (int i=1; i<len; i++){
    cp = sp[i];
    pp = sp[i] - min;
    if(max_profit < pp){
      max_profit = pp;
    }
    if(min > sp[i]){
      min = sp[i];
    }
  }
  return max_profit;
}
