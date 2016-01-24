#include "method.h"

void reverse_num_43(int n) {
	if(n > 10) {
		printf("%d", n % 10);
		reverse_num_43(n / 10);
	} else {
		printf("%d", n);
	}
}
int problem_43() {
	int n;

	printf("정수를 거꾸로 출력하는 프로그램\n");

	printf("숫자를 입력: ");
	scanf("%d", &n);
	printf("결과 : ");
	reverse_num_43(n);
	printf("\n");
	return 0;
}