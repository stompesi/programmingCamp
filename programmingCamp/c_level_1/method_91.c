#include "method.h"
#define N 10

int problem_91() {
	int n[N];
	int i, sum = 0;
	double average = 0;

	printf("�հ�� ����� ���ϴ� ���α׷�\n");

	for( i = 0 ; i < N ; i++) {
		printf("%2d) ���� �Է� : ", i+1);
		scanf("%d", &n[i]);
		sum += n[i];
	}

	average = (double) sum / N;

	printf("======���=====\n");
	printf("�հ� : %3d\n", sum);
	printf("��� : %.1lf\n", average);

	return 0;
}