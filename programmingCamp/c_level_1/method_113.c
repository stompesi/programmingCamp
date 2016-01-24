#include "method.h"

int problem_113() {
	int n, odd_sum = 0;
	int i;

	printf("1~n사이의 홀수들의 합을 구하는 프로그램\n");
	printf("정수 범위 입력 : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		if(i % 2 == 1) {
			odd_sum += i;
		}
	}
	printf("1~%d 홀 수 합 = %d\n", n, odd_sum);

	return 0;
}