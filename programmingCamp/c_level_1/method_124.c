#include "method.h"

int get_sum(int n) {
	int i, sum = 0;

	for( i = 0 ; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int problem_124() {
	int i, sum = 0;
	
	for(i = 1; i <= 100; i++) {
		sum += get_sum(i);
	}
	printf("sum = %d\n", sum);
	
	return 0;
}

