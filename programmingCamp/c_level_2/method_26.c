#include "method.h"

int is_prime_number_26(int number);

int problem_26() {
	int i;

	printf("26. 1 ~ 100 ������ �Ҽ��� ����ϴ� ���α׷�.\n");

	for(i = 1; i <= 100; i++) {
		if(is_prime_number_26(i) == 1) {
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;
}

// �Ҽ��̸� 1, �ƴϸ� 0�� ��ȯ.
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