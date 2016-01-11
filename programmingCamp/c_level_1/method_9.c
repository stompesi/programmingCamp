#include "method.h"

static int count = 0;

int fibonacci_sequence(int n) {
	count++;
	if(n <= 2) {
		return 1;
	} else {
		return fibonacci_sequence(n - 1) + fibonacci_sequence(n - 2);
	}
}

int problem_9() {
	int n, i;
	
	printf("피보나치 수열 함수를 호출하는 횟수를 출력하는 프로그램입니다.\n");
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		count = 0;
		if(i == n) {
			printf("%d", fibonacci_sequence(i));
		} else {
			printf("%d, ", fibonacci_sequence(i));
		}
		
	}
	printf("\n총 %d번 호출되었습니다.\n", count);

	return 0;
}