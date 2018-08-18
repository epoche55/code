#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string reverse_string(string ary, int len, int start, int end);

int main(){
  string message = " I  tae ekac ";

  // Identify the word
  int i = 0;
  int a = 0;
  int b = 0;
  int len = message.length();
//  printf("len = %i\n", len);
  bool eos = false;
  int c;
  bool afound = false;

  while(!eos){
    // find start string
    for(; i< len; i++){
      if (message[i] != ' ' && !afound){
        a = i;
        afound = true;
      }
      else if(message[i] == ' ' && afound){
        b = i-1;
        break;
      }
      else{
        b = len-1;
      }
    }
    c = b+2;
    afound = false;
    message = reverse_string(message, len, a, b);

    if (c >= len){
      cout << message << endl;
      eos = true;
      return 0;
    }
    a = b = c;
  }
  cout << message << endl;
}

string reverse_string(string ary, int len, int start, int end){
  char temp;
  int j = end;
  int mid = ((end - start)/2)+start;
  for (int i = start; i<=mid ;i++){
    temp = ary[i];
    ary[i] = ary[j];
    ary[j] = temp;
    j--;
  }
  return ary;
}
