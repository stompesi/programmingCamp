#include"method.h"
#include<stdio.h>
int factorial_58(int value) {
	if(value == 0) {
		return 1;
	} else {
		return value * factorial_58(value-1);
	}
}
int problem_58() {
	int sum = 0, i, fac_value;
	for(i =0 ; i <= 10 ; i++) {
		fac_value = factorial_58(i);
		sum += fac_value;
		printf("%d! = %d\n", i, fac_value);
	}
	printf("รัวี = %d\n", sum);
	return 0;
}