#include "method.h"

int problem_20() {
	int a, b, sum;
	
	printf("�� ������ ���밪�� ���ϴ� ���α׷��Դϴ�. \n");

	printf("1��° ��������? ");
	scanf("%d", &a);
	
	printf("2��° ��������? ");
	scanf("%d", &b);

	sum = abs(a) + abs(b);
	printf("�� ������ ���밪�� �� : %d\n", sum);
	
	return 0;
}