#include "method.h"
#define MULORSUM(x, y) x > y ? x * y : x + y

int problem_116() {
	int x, y;
	printf("���� �� �� �Է�\n");
	scanf("%d %d", &x, &y);

	if(x > y) {
		printf("if else ��� ��� = %d\n", x*y);
	} else {
		printf("if else ��� ��� = %d\n", x + y);
	}
	printf("���� ������ ��� ��� = %d\n", MULORSUM(x, y));
	
	return 0;
}