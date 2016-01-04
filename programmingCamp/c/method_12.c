#include "method.h"

int factorial_recursive(int number);

int problem_12() {
	int input_number;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &input_number);

	if(input_number < 1) {
		printf("���� ������ �ƴմϴ�.\n");
		return 0;
	}
	else if (input_number > 16) {
		printf("ǥ�� ������ �ѽ��ϴ�. 17���� ���� ���� �Է��ϼ���.\n");
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