#include <iostream>
#include <string>

using namespace std;
void reverse_words(string ary, int len);

int main(){
  string message = "pizza like really I";
  reverse_words(message, message.length());

  return 0;
}

void reverse_words(string ary, int len){
  int a = 0;
  int b = 0;
  bool eos = false;

  for(int i=0; i< len; i++){
    if (ary[i] == ' '){
      b=i;
      break;
    }
  }
  if(b == len-1)
    return;
  //////
  string str;
  int c = b+1;
  int d, j, i;

  while(!eos){
    cout << ary << endl;
    c = b+1;
    for(i=c; i<len ; i++){
      if(ary[i] == ' '){
        d = i;
        break;
      }
      else{
        d = len-1;
      }

    }
    if (d == len-1){
      c--;
      eos = true;
    }
    str = ary.substr(c,d);

    j=d;
    for(i=b; i>=0;i--){
      ary[j] = ary[i];
    }

    ary.replace(0,j,str);
  }

  cout << ary << endl;

}
