#include <stdio.h>


struct node{
	node *ptr;
};

int main(void){
	printf("Hello world!\n");
	
	// How to reverse a link list?
	node nd1;
	node nd2;
	node nd3;
	node nd4;
	
	nd1->ptr = &nd2;
	nd2->ptr = &nd3;
	nd3->ptr = &nd4;
	
	

	return 0;
}
