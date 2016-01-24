#include "method.h"

int problem_44() {
	int n;

	printf("10000 미만의 숫자를 입력하면 단위 별로 구분하여 숫자를 출력\n");

	printf("정수 n 입력 : ");
	scanf("%d", &n);
	
	printf("단위\n");
	printf("1000단위 : %d\n", n / 1000);
	printf(" 100단위 : %d\n", (n - ((n / 1000) * 1000)) / 100);
	printf("  10단위 : %d\n", (n - ((n / 100) * 100)) / 10);
	printf("   1단위 : %d\n", n % 10);

	return 0;
}