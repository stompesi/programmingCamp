#include "method.h"

int factorial(int number);

int problem_10() {
	int input_number;
	
	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &input_number);
	
	if(input_number < 1) {
		printf("양의 정수가 아닙니다.\n");
		return 0;
	}

	printf("%d! = %d\n", input_number, factorial(input_number));
}

int factorial(int number) {
	int result = 1, i;

	for(i = number; i > 0; i--) {
		result *= i;
	}

	return result;
}