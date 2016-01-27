#include "method.h"

int fibonacci(int n);

int problem_62() {
	int i, sum = 0, temp;
	
	for(i = 0 ; i <= 20 ; i++) {
		temp = fibonacci(i);
		printf("%d ", temp);
		sum += temp;
	}
	printf("\n");
	printf("sum = %d\n", sum);

	return 0;
}

int fibonacci(int n) {
	if(n <= 0) {
		return 0;
	}
	else if(n == 1) {
		return 1;
	}
	else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}	
}