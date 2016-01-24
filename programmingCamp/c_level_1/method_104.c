#include "method.h"

int problem_104() {
	int x, y;

	printf("두 수를 입력 \n");
	scanf("%d %d", &x, &y);
	
	if(x > y) {
		printf("합 : %d\n", x + y);
	} else {
		printf("곱 : %d\n", x * y);
	}

	return 0;
}