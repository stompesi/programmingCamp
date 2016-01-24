#include "method.h"
#define N 10

int problem_91() {
	int n[N];
	int i, sum = 0;
	double average = 0;

	printf("합계와 평균을 구하는 프로그램\n");

	for( i = 0 ; i < N ; i++) {
		printf("%2d) 정수 입력 : ", i+1);
		scanf("%d", &n[i]);
		sum += n[i];
	}

	average = (double) sum / N;

	printf("======결과=====\n");
	printf("합계 : %3d\n", sum);
	printf("평균 : %.1lf\n", average);

	return 0;
}