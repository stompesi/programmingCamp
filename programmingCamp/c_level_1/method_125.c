#include "method.h"

int oddsum1(int n) {
	int i, sum = 0;

	for( i = 0 ; i <= n ; i++) {
		if(i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}

int oddsum2(int n) {
	int count = n, sum = 0;

	while(1) {
		if(count % 2 != 0) {
			sum += count;
			count--;
		} else {
			count--;
		}
		if(count == 0) {
			break;
		}
	}
	return sum;
}

int oddsum3(int n) {
	if(n <= 0) {
		return 0;
	}
	if(n % 2 == 0) {
		return oddsum3(n - 1);
	} else {
		return n + oddsum3(n - 1);
	}
}

int problem_125() {
	int n = 100;
	int sum = 0;
	int i;

	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) Àç±Í oddsum3(%d) = %d\n", n, oddsum3(n));

	for(i = n ; i > 0 ; i--) {
		if(i % 2 != 0) {
			sum += oddsum1(n);
		}
	}

	printf("(4) sum = %d\n", sum);

	return 0;
}

