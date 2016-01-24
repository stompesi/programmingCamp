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

	printf("원하는 모양을 갯수만큼 출력하는 프로그램\n");

	printf("원하는 문양은? ");
	scanf("%s", &ch);

	printf("정수 n은? ");
	scanf("%d", &n);

	repeat(&ch, n);

	return 0;
}
