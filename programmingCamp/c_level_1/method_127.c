#include "method.h"

int problem_127() {
	int n, i;
	
	printf("��� ���ϴ� ���α׷�\n");

	printf("���Է� : ");
	scanf("%d", &n);

	printf("��� : ");
	for(i = 1 ; i <= n ; i++) {
		if(n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}