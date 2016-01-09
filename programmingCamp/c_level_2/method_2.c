#include "method.h"

int is_prime_number(int number);

int problem_2() {
	int input_number;
	int i;
	int sum = 0;

	printf("���� ������ �Է� �޾� 1~n ������ �Ҽ��� �Ҽ��� ���� ����ϴ� ���α׷�.\n");

	printf("�Է��� ���� ���� : ");
	scanf("%d", &input_number);

	if(input_number < 1 || input_number > 100) {
		printf("1 ~ 100 ������ ���� �Է��ϼ���.\n", input_number);
		return 0;
	}
	
	printf("72���� ���� �Ҽ� :");
	for(i = 2; i < input_number; i++) {
		if (is_prime_number(i)) {
			printf(" %d", i);
			sum += i;
		}
	}

	printf("\n72������ �Ҽ��� �� : %d\n", sum);

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