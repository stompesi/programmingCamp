#include "method.h"

void binary(int n) {
	if(n > 1) {
		binary(n / 2);
		printf("%d", n % 2);
	} else {
		printf("%d", n % 2);
	}
}

int problem_75() {
	int n;
	printf("십진수를 이진수로 바꾸는 프로그램\n");

	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);

	printf("결과 >> 2진수 : ");
	binary(n);
	printf("\n");

	return 0;
}

