#include "method.h"

int problem_113() {
	int n, odd_sum = 0;
	int i;

	printf("1~n������ Ȧ������ ���� ���ϴ� ���α׷�\n");
	printf("���� ���� �Է� : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		if(i % 2 == 1) {
			odd_sum += i;
		}
	}
	printf("1~%d Ȧ �� �� = %d\n", n, odd_sum);

	return 0;
}