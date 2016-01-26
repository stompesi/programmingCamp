#include "method.h"

int is_prime_number_26(int number);

int problem_26() {
	int i;

	printf("26. 1 ~ 100 사이의 소수를 출력하는 프로그램.\n");

	for(i = 1; i <= 100; i++) {
		if(is_prime_number_26(i) == 1) {
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;
}

// 소수이면 1, 아니면 0을 반환.
int is_prime_number_26(int number) {
	int i;

	if(number < 2) {
		return 0;
	}

	for(i = 2; i <= number / 2; i++) {
		if(number % i == 0) {
			return 0;
		}
	}

	return 1;
}