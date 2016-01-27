#include "method.h"

int get_sum(int n);

int problem_56() {
	int i = 0, sum = 0;

	for(i = 1; i <= 100; i++) {
		sum += get_sum(i);
	}

	printf("1+(1+2)+(1+2+3+)+...+(1+2+3+...+100) = %d\n", sum);

	return 0;
}

int get_sum(int n) {
	if (n < 1) {
		return 0;
	}
	else {
		return n + get_sum(n - 1);
	}
}