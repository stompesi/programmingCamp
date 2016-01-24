#include "method.h"

int problem_112() {
	int sum = 100;
	int n;

	while(1) {
		if(sum == 0) {
			printf("sum = 0\n");
			break;
		}
		printf("sum = %d »¬ °ª ÀÔ·Â: ", sum);
		scanf("%d", &n);
		fflush(stdin);
		sum -= n;
	}
	return 0;
}