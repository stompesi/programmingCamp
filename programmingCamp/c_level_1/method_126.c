#include "method.h"

int factorial_rec(int n) {
	if(n == 0) {
		return 1;
	}
	if(n > 0) {
		return n * factorial_rec(n - 1);
	}
}

int problem_126() {
	int i, n;
	int sum = 0;
	printf("1~n까지의 곱들을 출력하는 프로그램\n");

	printf("정수 n입력 : ");
	scanf("%d", &n);

	for( i = 0 ; i <= n ; i++) {
		printf("%d!:%d ", i, factorial_rec(i));
		sum += factorial_rec(i);
	}
	printf("\nsum = %d\n", sum);
	return 0;
}

