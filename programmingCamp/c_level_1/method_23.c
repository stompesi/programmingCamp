#include "method.h"

int power(int x, int y) {
	int i, result = x;
	
	for(i = 1 ; i < y ; i++) {
		result *= x;
	}
	return result;
}

int problem_23() {
	int n, p;
	
	printf("순환함수를 구하는 프로그램입니다.\n");
	printf("정수 n 입력 : ");
	scanf("%d", &n);
	
	printf("입력한 정수 %d의 제곱수 입력 : ", n);
	scanf("%d", &p);

	printf("%d의  %d의 제곱의 값 : %d\n", n, p, power(n, p));

	return 0;
}