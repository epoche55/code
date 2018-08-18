#include <stdio.h>

// 5, 4, 3, 2, 1

int main(){
	
	int array []= {5, 4, 3, 2, 1};
	int arrlen = sizeof(array);
	int temp=0;
	int i;
	for (int m =0; m<arrlen-1; m++){

		for(i=0; i<arrlen-1-m; i++){


			if(array[i]>array[i+1]){
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = array[i];
			}
		}

	}
	for(i=0;i<arrlen;i++){
		printf("%i,",array[i]);
	}

	return 0;
}