#include "method.h"

int problem_99() {
	int n;
	int sum = 0;

	printf("4자리 정수 n입력 : ");
	scanf("%d", &n);

	while(1) {
		if(n > 1000) {
			printf("%d+", n / 1000);
			sum += n / 1000;
			n -= (n / 1000) * 1000;
		} else if(n > 100) {
			printf("%d+", n / 100);
			sum += n / 100;
			n -= (n / 100) * 100;
		} else if(n > 10) {
			printf("%d+", n / 10);
			sum += n / 10;
			n -= (n / 10) * 10;
		} else {
			sum += n;
			printf("%d=%d\n", n, sum);
			break;
		}
	}
	return 0;
}