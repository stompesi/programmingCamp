#include "method.h"
#define MULORSUM(x, y) x > y ? x * y : x + y

int problem_116() {
	int x, y;
	printf("정수 두 개 입력\n");
	scanf("%d %d", &x, &y);

	if(x > y) {
		printf("if else 사용 결과 = %d\n", x*y);
	} else {
		printf("if else 사용 결과 = %d\n", x + y);
	}
	printf("조건 연산자 사용 결과 = %d\n", MULORSUM(x, y));
	
	return 0;
}