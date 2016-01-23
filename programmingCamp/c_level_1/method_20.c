#include "method.h"

int problem_20() {
	int a, b, sum;
	
	printf("두 정수의 절대값을 구하는 프로그램입니다. \n");

	printf("1번째 정수값은? ");
	scanf("%d", &a);
	
	printf("2번째 정수값은? ");
	scanf("%d", &b);

	sum = abs(a) + abs(b);
	printf("두 정수의 절대값의 합 : %d\n", sum);
	
	return 0;
}