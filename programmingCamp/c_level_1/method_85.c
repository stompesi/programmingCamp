#include "method.h"

int sumodd(int x) {
	if(x <= 0) {
		return 0;
	}
	if(x % 2 == 0) {
		return sumodd(x - 1);
	}
	else {
		return x + sumodd(x - 1);
	}
}

int problem_85() {
	int n, sum = 0;

	printf("�Է��� �������� Ȧ���鸸 ���ϴ� ���α׷�\n");

	printf("n�Է� : ");
	scanf("%d", &n);

	sum = sumodd(n);
	printf("Ȧ������ �� : %d\n", sum);

	return 0;
}
