#include "method.h"

int factorial(int number);

int problem_10() {
	int input_number;
	
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &input_number);
	
	if(input_number < 1) {
		printf("���� ������ �ƴմϴ�.\n");
		return 0;
	}
	else if(input_number > 16) {
		printf("ǥ�� ������ �ѽ��ϴ�. 17���� ���� ���� �Է��ϼ���.\n");
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