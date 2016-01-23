#include "method.h"

int problem_21() {
	int n, p = 2;

	printf("소인수 분해하는 프로그램입니다.\n");
	printf("소인수 분해할 정수 n은? ");
	
	scanf("%d", &n);
	printf("%d의 소인수분해 : ", n);
	
	while (1) {
		if(n % p == 0) {
			n = n / p;
			if(n != 1) {
				printf("%dx", p);
			} else {
				printf("%d\n", p);
				break;
			}
		} else {
			p++;
		}
	}

	return 0;
}