#include "method.h"
#define N 3

int problem_80() {
	double a, b, c;
	double avg;
	printf("�� ������ ����� ���ϴ� ���α׷�\n");

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	avg = (a + b + c) / N;

	printf("average is %.3lf\n", avg);

	return 0;
}