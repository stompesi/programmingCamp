#include "method.h"

int problem_5() {
	int input_number;
	int i;

	scanf("%d", &input_number);

	// �Ҽ��� 2���� ����
	// ���� �������� 0�̸�, ������ �������� ���̴� �Ҽ��� �ƴϴ�.
	// n�� ������ �������� n�� i�� ���ٸ� �Ҽ� �ƴϸ� �Ҽ��� �ƴϹǷ� ����� ����

	if(input_number < 2) {
		printf("�Է��� %d�� �Ҽ��� �ƴմϴ�.\n", input_number);	
		return 0;
	}

	for(i = 2; i <= input_number / 2; i++) {
		if (input_number % i == 0) {
			printf("�Է��� %d�� �Ҽ��� �ƴմϴ�.\n", input_number);	
			return 0;
		}
	}
	
	printf("�Է��� %d�� �Ҽ��Դϴ�.\n", input_number);
	return 0;
}