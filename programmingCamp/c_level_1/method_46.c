#include "method.h"

void gugudan_46(int n) {
	int i;

	for(i = 1 ; i <= 9 ; i++) {
		printf("%d * %d = %d\n", n, i, i*n);
	}
}

int problem_46() {
	int dan;

	printf("원하는 단을 입력 > ");
	scanf("%d", &dan);

	printf("\n");
	gugudan_46(dan);

	return 0;
}
