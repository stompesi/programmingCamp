#include "method.h"

int problem_104() {
	int x, y;

	printf("�� ���� �Է� \n");
	scanf("%d %d", &x, &y);
	
	if(x > y) {
		printf("�� : %d\n", x + y);
	} else {
		printf("�� : %d\n", x * y);
	}

	return 0;
}