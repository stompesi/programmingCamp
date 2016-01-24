#include "method.h"


int absolute_47(int n) {
	return abs(n);
}

int problem_47() {
	int num;
	printf("정수를 입력하고 Enter> ");
	scanf("%d", &num);

	printf("\n%d의 절대값 %d \n", num, absolute_47(num));

	return 0;
}
