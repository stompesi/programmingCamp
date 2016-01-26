#include "method.h"

int gcd(int x, int y);

int problem_23() {
	int x, y;
	int result;

	printf("23. 재귀 함수를 이용하여 최대공약수를 구하는 프로그램.\n");
	
	printf("두 정수를 입력하세요.\n");
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	
	if(x > y) {
		result = gcd(x, y);
	}
	else {
		result = gcd(y, x);
	}

	printf("%d와 %d의 최대 공약수는 %d 입니다.\n", x, y, result);

	return 0;
}

int gcd(int x, int y) {
	if(y == 0) {
		return x;
	}
	else {
		return gcd(y, x%y);
	}
}