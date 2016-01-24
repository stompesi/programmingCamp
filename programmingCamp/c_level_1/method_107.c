#include "method.h"

int problem_107() {
	int n, count = 0;

	printf("자리수 구하는 프로그램\n");
	printf("정수입력 : ");
	scanf("%d", &n);

	while(n > 0) {
		count++;
		n /= 10;
	}

	printf("자리수 = %d\n", count);

	return 0;
}