#include "method.h"

int problem_27() {
	char op;
	int a, b;

	printf("��Ģ�����ϴ� ���α׷��Դϴ�.\n");

	printf("��Ģ������(+, -, *, /)�� �� ���� ������ �Է��ϼ���\n");
	printf("�Է� : ");
	scanf("%c %d %d", &op, &a, &b);
	
	switch (op) {
	case '+': printf("��� : %d %c %d = %d\n", a, op, b, a + b); break;
	case '-': printf("��� : %d %c %d = %d\n", a, op, b, a - b); break;
	case '*': printf("��� : %d %c %d = %d\n", a, op, b, a * b); break;
	case '/': printf("��� : %d %c %d = %d\n", a, op, b, a / b); break;
	default: break;
	}

}