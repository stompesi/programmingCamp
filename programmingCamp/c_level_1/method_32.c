#include "method.h"

void exchange_32(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int problem_32() {
	int a, b;
	printf("두 변수의 값을 교환하는 프로그램입니다.\n");
	printf("a의 값 입력 : ");
	scanf("%d", &a);
	printf("b의 값 입력 : ");
	scanf("%d", &b);

	exchange_32(&a, &b);

	printf("뒤바뀐 a와 b의 값 : a = %d, b = %d\n", a, b);

	return 0;
}
