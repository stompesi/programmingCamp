#include "method.h"
#define N 10

int sum(int *p, int n) {
	int i, sum = 0;

	for( i = 0 ; i < n ; i++) {
		sum += p[i];
	}
	return sum;
}

int problem_60() {
	int a[N];
	int i;

	printf("������ �迭�� ���ҵ��� ���� ���ϴ� ���α׷�\n\n");
	for( i = 0 ; i < N ; i++) {
		printf("%d��° �Է� : ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("�Է��� ������ �� : %d\n", sum(a, N));
	
	return 0;
}
