#include "method.h"

int problem_107() {
	int n, count = 0;

	printf("�ڸ��� ���ϴ� ���α׷�\n");
	printf("�����Է� : ");
	scanf("%d", &n);

	while(n > 0) {
		count++;
		n /= 10;
	}

	printf("�ڸ��� = %d\n", count);

	return 0;
}