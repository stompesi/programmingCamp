#include "method.h"

int problem_22() {
	int x, y, r = 0;
	int temp = 0;

	printf("최대공약수를 구하는 프로그램입니다.\n");
	
	printf("1번째 정수 입력 : ");
	scanf("%d", &x);
	
	printf("2번째 정수 입력 : ");
	scanf("%d", &y);

	if(x < y) {
		temp = x;
		x = y;
		y = temp;
	}

	while (1) {
		if(y == 0) {
			printf("최대공약수 : %d\n", x);
			exit(1);
		}
		r = x % y;
		x = y;
		y = r;
	}

	return 0;
}