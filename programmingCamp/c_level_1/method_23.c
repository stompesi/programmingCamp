#include "method.h"

int power(int x, int y) {
	int i, result = x;
	
	for(i = 1 ; i < y ; i++) {
		result *= x;
	}
	return result;
}

int problem_23() {
	int n, p;
	
	printf("��ȯ�Լ��� ���ϴ� ���α׷��Դϴ�.\n");
	printf("���� n �Է� : ");
	scanf("%d", &n);
	
	printf("�Է��� ���� %d�� ������ �Է� : ", n);
	scanf("%d", &p);

	printf("%d��  %d�� ������ �� : %d\n", n, p, power(n, p));

	return 0;
}