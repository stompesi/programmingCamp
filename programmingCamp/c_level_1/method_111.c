#include "method.h"

int problem_111() {
	int sum = 0;
	int n;

	while(1) {
		if(sum == 100) {
			printf("sum = 100\n");
			break;
		}
		printf("sum = %d 더할 값 입력: ", sum);
		scanf("%d", &n);
		fflush(stdin);
		sum += n;
	}
	return 0;
}