#include"method.h"
#include<stdio.h>

void problem_1(){
	int curr_sum = 0, total_sum = 0,i;
	for(i = 1 ; i <= 10 ; i++){
		curr_sum += i;
		total_sum += curr_sum;
		printf("%d\n", total_sum);
	}
}