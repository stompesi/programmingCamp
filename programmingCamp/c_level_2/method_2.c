#include "method.h"

int is_prime_number(int number);

int problem_2() {
	int input_number;
	int i;
	int sum = 0;

	printf("양의 정수를 입력 받아 1~n 사이의 소수와 소수의 합을 출력하는 프로그램.\n");

	printf("입력한 양의 정수 : ");
	scanf("%d", &input_number);

	if(input_number < 1 || input_number > 100) {
		printf("1 ~ 100 사이의 수를 입력하세요.\n", input_number);
		return 0;
	}
	
	printf("72보다 작은 소수 :");
	for(i = 2; i < input_number; i++) {
		if (is_prime_number(i)) {
			printf(" %d", i);
			sum += i;
		}
	}

	printf("\n72까지의 소수의 합 : %d\n", sum);

	return 0;
}

int is_prime_number(int number) {
	int i;

	for(i = 2; i <= number / 2; i++) {
		if(number % i == 0) {
			return 0;
		}
	}

	return 1;
}