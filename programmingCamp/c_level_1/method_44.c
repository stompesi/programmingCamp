#include "method.h"

int problem_44() {
	int n;

	printf("10000 �̸��� ���ڸ� �Է��ϸ� ���� ���� �����Ͽ� ���ڸ� ���\n");

	printf("���� n �Է� : ");
	scanf("%d", &n);
	
	printf("����\n");
	printf("1000���� : %d\n", n / 1000);
	printf(" 100���� : %d\n", (n - ((n / 1000) * 1000)) / 100);
	printf("  10���� : %d\n", (n - ((n / 100) * 100)) / 10);
	printf("   1���� : %d\n", n % 10);

	return 0;
}