#include "method.h"

void exchange_32(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int problem_32() {
	int a, b;
	printf("�� ������ ���� ��ȯ�ϴ� ���α׷��Դϴ�.\n");
	printf("a�� �� �Է� : ");
	scanf("%d", &a);
	printf("b�� �� �Է� : ");
	scanf("%d", &b);

	exchange_32(&a, &b);

	printf("�ڹٲ� a�� b�� �� : a = %d, b = %d\n", a, b);

	return 0;
}
