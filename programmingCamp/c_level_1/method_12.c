#include "method.h"

int factorial_recursive(int number);

int problem_12() {
	int input_number;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &input_number);

	if(input_number < 1) {
		printf("양의 정수가 아닙니다.\n");
		return 0;
	}
	else if (input_number > 16) {
		printf("표현 범위를 넘습니다. 17보다 작은 수를 입력하세요.\n");
		return 0;
	}

	printf("%d! = %d\n", input_number, factorial_recursive(input_number));
}

int factorial_recursive(int number) {
	if(number <= 1) {
		return 1;
	}
	else {
		return number * factorial_recursive(number - 1);
	}
}