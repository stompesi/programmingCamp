#include "method.h"

int problem_27() {
	char op;
	int a, b;

	printf("사칙연산하는 프로그램입니다.\n");

	printf("사칙연산자(+, -, *, /)와 두 개의 정수를 입력하세요\n");
	printf("입력 : ");
	scanf("%c %d %d", &op, &a, &b);
	
	switch (op) {
	case '+': printf("출력 : %d %c %d = %d\n", a, op, b, a + b); break;
	case '-': printf("출력 : %d %c %d = %d\n", a, op, b, a - b); break;
	case '*': printf("출력 : %d %c %d = %d\n", a, op, b, a * b); break;
	case '/': printf("출력 : %d %c %d = %d\n", a, op, b, a / b); break;
	default: break;
	}

}