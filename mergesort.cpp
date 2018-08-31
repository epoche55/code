#include <stdio.h>

class Sort{
public:
  int *a;

  void MergeSort(int a[], int l, int r){
    int m;
    if(r>l){
      m = (r+l)/2;
      MergeSort(a,l,m);
      MergeSort(a, m+1,r);
      Merge(a,l,m,r);
    }
  }

  void Merge(int a[], int l, int m, int r){
    int Llen = (m+1)-l;
    int Rlen = r-m;
    int L[Llen];
    int R[Rlen];
    int lc = 0;
    int rc = 0;
    // for(int i=l; i<=r; i++){
    //   if(i>=(m+1)){
    //     R[rc] = a[i];
    //     rc++;
    //   }
    //   else{
    //     L[lc] = a[i];
    //     lc++;
    //   }
    // }

    printf("L: " );
    for (int i = 0; i < Llen; i++) {
      L[i] = a[i+l];
      printf("%i ", L[i]);
    }
    printf("\nR: " );
    for (int i = 0; i < Rlen; i++) {
      R[i] = a[i+m+1];
      printf("%i ", R[i]);
    }


    int j=0;
    int k=0;
    int i=l;
    for(i=l; i<=r; i++){
      if(j==Llen){
        a[i] = R[k];
        k++;
      }
      else if(k == Rlen){
        a[i] = L[j];
        j++;
      }
      else if(L[j] <= R[k]){
        a[i] = L[j];
        j++;
      }
      else{
        a[i]=R[k];
        k++;
      }
    }
    // while (j < Llen && k < Rlen){
    //   if(L[j] <= R[k]){
    //     a[i] = L[j];
    //     j++;
    //   }
    //   else{
    //     a[i]=R[k];
    //     k++;
    //   }
    //   i++;
    // }
    // while (j < Llen){
    //   a[i] = L[j];
    //   j++;
    //   i++;
    // }
    // while (k < Rlen) {
    //   a[i] = R[k];
    //   k++;
    //   i++;
    // }
    for (int i = 0; i < 5; i++) {
      printf("%i ", a[i] );
    }

  }

};


int main(){
  Sort b;
  int array[5] = {4,7,3,1,2};
  b.a = array;
  b.MergeSort(b.a,0,4);
  printf("\n\n\n" );
  for (int i = 0; i < 5; i++) {
    printf("%i ", b.a[i] );
  }
  printf("\n" );
  return 0;
}
