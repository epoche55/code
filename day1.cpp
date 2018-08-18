#include <stdio.h>
#include <array>

int get_max_profit();

int main(void){
	int result = get_max_profit();
	printf("result: %i\n", result);
	return 0;
}


int get_max_profit(){
	int stock_prices[] = {10,10,10,10};
	int len = sizeof(stock_prices)/sizeof(int);
	int min1 = 1000;
	int index1=0;
	int max2 = 0;
	int i;
	int index2=0;// not gonna work

	for(i=0;i<len;i++){
		// find min index
		if (min1 > stock_prices[i]){
			min1 = stock_prices[i];
			index1 = i;
		}
		// find max index
		else if(max2 < stock_prices[i]){
			max2 = stock_prices[i];
			index2 = i;
			printf("i2: %i\n", i);
		}
	}
	printf("i1:%i i2:%i\n", index1, index2);
	if(index1 > index2){
		int min2 = 1000;
		int i2min;
		int max1 = 0;
		int i1max;
		// left side of array
		for ( i = 0; i < index2; i++) {
			if(min2 > stock_prices[i]){
				min2 = stock_prices[i];
				i2min = 1;
			}
		}
		// right side of array
		for(i = index1; i<len;i++){
			if (max1 < stock_prices[i]){
				max1 = stock_prices[i];
				i1max = i;
			}
		}
		if( (min2 == 1000) && (max1 == stock_prices[index1]))
		{
			printf("min2: %i, stock_prices[max2]=%i, max1=%i, stock_prices[index1] = %i", min2, stock_prices[max2], max1, stock_prices[index1]);
			return 0;
		}
		int diff1 = stock_prices[i1max] - stock_prices[index1];
		int diff2 = stock_prices[index2] - stock_prices[i2min];
		if(diff1 < diff2)
			return diff2;
		else
			return diff1;
	}
	else
		return stock_prices[index2] - stock_prices[index1];
}
