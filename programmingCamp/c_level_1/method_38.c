#include "method.h"

int problem_38() {
	int a, b, c;
	int max = 0;
	printf("���� ū ���� ����ϴ� ���α׷��Դϴ�.\n");

	printf("1��° ���� : ");
	scanf("%d", &a);
	printf("2��° ���� : ");
	scanf("%d", &b);
	printf("3��° ���� : ");
	scanf("%d", &c);

	if(a > b) {
		max = a;
	} else {
		max = b;
	}
	
	if(max < c) {
		max = c;
	}

	printf("���� ū �� : %d\n", max);

	return 0;
}