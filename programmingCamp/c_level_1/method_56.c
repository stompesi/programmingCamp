#include "method.h"

int problem_56() {
	int fibo[11] = { 0 };
	int i;

	fibo[2] = 1;

	for(i = 3 ; i <= 10 ; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for(i = 1 ; i <= 10 ; i++) {
		printf("%d ", fibo[i]);
		if(i % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}