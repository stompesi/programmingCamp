#include "method.h"

int problem_78() {
	int n, i, j;
	printf("*�� �Է��� ����ŭ ����ϴ� ���α׷�\n");

	printf("n�� �Է� : ");
	scanf("%d", &n);

	printf("��� ��� : \n");

	for(i = 1 ; i <= n ; i++) {
		for(j = 1; j <= i ; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}