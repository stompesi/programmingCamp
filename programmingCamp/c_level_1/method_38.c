#include "method.h"

int problem_38() {
	int a, b, c;
	int max = 0;
	printf("제일 큰 수를 출력하는 프로그램입니다.\n");

	printf("1번째 정수 : ");
	scanf("%d", &a);
	printf("2번째 정수 : ");
	scanf("%d", &b);
	printf("3번째 정수 : ");
	scanf("%d", &c);

	if(a > b) {
		max = a;
	} else {
		max = b;
	}
	
	if(max < c) {
		max = c;
	}

	printf("제일 큰 수 : %d\n", max);

	return 0;
}