#include "method.h"

void binary(int n) {
	if(n > 1) {
		binary(n / 2);
		printf("%d", n % 2);
	} else {
		printf("%d", n % 2);
	}
}

int problem_75() {
	int n;
	printf("�������� �������� �ٲٴ� ���α׷�\n");

	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("��� >> 2���� : ");
	binary(n);
	printf("\n");

	return 0;
}

