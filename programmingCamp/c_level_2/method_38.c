#include "method.h"

int problem_38() {
	int a, n, i;
	double r, sum = 0;

	printf("38. n������ ������ �հ� ��� ���α׷�.\n");
	
	printf("���Ծ� : ");
	scanf("%d", &a);
	printf("������ : ");
	scanf("%lf", &r);
	printf("���� �� : ");
	scanf("%d", &n);

	for(i = 0 ; i < n ; i++) {
		sum = sum + a;
		sum = sum*(1 + r);
	}

	printf("������ �հ�� : %.3lf\n", sum);
	
	return 0;
}