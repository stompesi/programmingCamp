#include "method.h"
#define N 10

int sum(int *p, int n) {
	int i, sum = 0;

	for( i = 0 ; i < n ; i++) {
		sum += p[i];
	}
	return sum;
}

int problem_60() {
	int a[N];
	int i;

	printf("정수형 배열의 원소들의 합을 구하는 프로그램\n\n");
	for( i = 0 ; i < N ; i++) {
		printf("%d번째 입력 : ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("입력한 값들의 합 : %d\n", sum(a, N));
	
	return 0;
}
