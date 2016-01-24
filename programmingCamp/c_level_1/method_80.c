#include "method.h"
#define N 3

int problem_80() {
	double a, b, c;
	double avg;
	printf("세 정수의 평균을 구하는 프로그램\n");

	printf("세 정수를 입력하세요 : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	avg = (a + b + c) / N;

	printf("average is %.3lf\n", avg);

	return 0;
}