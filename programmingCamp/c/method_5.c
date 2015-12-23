#include "method.h"

int problem_5() {
	int i, n, result = 1;

	scanf("%d", &n);

	// 나누어 떨어지려면 해당 수의 2배여야하니까 n/2까지만 확인하면 된다.
	// 나눈 나머지가 0이면, 나누어 떨어지는 것이니 소수가 아니다.
	// 나누어 떨어지지 않으면 result값이 1로 유지된다.

	for (i = 2; i < (n / 2); i++) {
		if (n % i == 0) {
			result = 0;
		}
	}

	if (result == 0) {
		printf("입력한 %d는 소수가 아닙니다.\n", n);
	} else {
		printf("입력한 %d는 소수입니다.\n", n);
	}

	return 0;
}