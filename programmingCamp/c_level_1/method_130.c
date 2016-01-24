#include "method.h"

void print_comma(int n) {
	int x = n / 1000;

	if(x > 0) {
		print_comma(x);
		printf(",%03d\n", n - 1000 * x);
	} else {
		printf("%d\n", n % 1000);
	}
}

int problem_130() {
	int n;
	printf("정수입력: ");
	scanf("%d", &n);

	print_comma(n);
	return 0;
}


