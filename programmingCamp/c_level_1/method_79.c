#include "method.h"

void repeat(char *c, int n) {
	int i, j;

	for(i = 1 ; i <= n ; i++) {
		for(j = 1; j <= i; j++) {
			printf("%s", c);
		}
		printf("\n");
	}
}

int problem_79() {
	int n;
	char ch[5];

	printf("���ϴ� ����� ������ŭ ����ϴ� ���α׷�\n");

	printf("���ϴ� ������? ");
	scanf("%s", &ch);

	printf("���� n��? ");
	scanf("%d", &n);

	repeat(&ch, n);

	return 0;
}
