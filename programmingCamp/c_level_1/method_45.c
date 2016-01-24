#include "method.h"

int problem_45() {
	int n, i, j, sum = 0;

	printf("합 계산 프로그램\n");
	printf("n은? ");
	scanf("%d", &n);

	for(i = 1 ; i <= n ; i++) {
		if(i != 1) {
			printf("(");
		}

		for(j = 1 ; j <= i ; j++) {
			if(i == 1) {
				printf("%d + ", i);
				sum += i;
			} else {
				if(j != i) {
					printf("%d+", j);
					sum += j;
				} else {
					if(j == n) {
						printf("%d)\n", j);
						sum += j;
					} else {
						printf("%d) + ", j);
						sum += j;
					}
				}
			}
		}
	}

	printf("모두 더한 합 : %d\n", sum);

	return 0;
}