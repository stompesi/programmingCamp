#include"method.h"
#include<stdio.h>

#define CRITICAL_VALUE 0.000001

int get_factorial(int input){
	int result = 1, i;
	for(i = 0 ; i < input ; i++){
		result *= (i+1);
	}
	return result;
}
long double get_inverse(int value){
	return 1./value;
}
int problem_10(){
	int number = 1;
	long double prev_result = 0, curr_result = 1;
	while(1){
		curr_result += get_inverse(get_factorial(number++));
		if((curr_result - prev_result) < CRITICAL_VALUE){
			break;
		}
		prev_result = curr_result;
	}
	printf("Euler Number >> %.10f\n", curr_result);

	return 0;
}