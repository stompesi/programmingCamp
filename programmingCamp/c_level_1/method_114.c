#include "method.h"

int problem_114() {
	int n1, n2, i;
	char op;

	printf("��� ���α׷�\n");
	
	for(i = 0 ; i < 4 ; i++) {
		printf("���� �Է�: ");
		scanf("%d%c%d", &n1, &op, &n2);

		switch (op) {
		case '+': printf("%d %c %d = %d\n", n1, op, n2, n1 + n2); break;
		case '-': printf("%d %c %d = %d\n", n1, op, n2, n1 - n2); break;
		case '*': printf("%d %c %d = %d\n", n1, op, n2, n1 * n2); break;
		case '/': printf("%d %c %d = %d\n", n1, op, n2, n1 / n2); break;
		default: break;
		}
	}
	return 0;
}