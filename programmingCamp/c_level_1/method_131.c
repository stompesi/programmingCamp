#include "method.h"

int is_prime(int n) {
	int i;
	int count = 0;
	if(n == 1) {
		return 1;
	} else {
		for(i = 1 ; i <= n ; i++) {
			if(n % i == 0) {
				count++;
			}
		}
		if(count == 2) {
			return 1;
		} else {
			return 0;
		}
	}
}

int problem_131() {
	int i, n, sum = 0;
	printf("정수 범위 입력: ");
	scanf("%d", &n);

	for(i = 2 ; i < n ; i++) {
		if(is_prime(i) == 1) {
			sum += i;
		}
	}

	printf("sum = %d\n", sum);
	
	return 0;
}
