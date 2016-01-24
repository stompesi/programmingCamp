#include "method.h"


int allSum(int n) {
	if(n > 0) {
		return n + allSum(n - 1);
	} else {
		return n;
	}
}

int problem_109() {
	int i, count = 1;
	int sum = 0;
	int n = 100;

	for(i = 1 ; i <= 100 ; i++) {
		sum += i;
	}
	printf("(1) for�� �̿� sum = %d\n", sum);
	
	sum = 0;
	while(count <= 100) {
		sum += count;
		count++;
	}
	printf("(2) while�� �̿� sum = %d\n", sum);

	sum = 0;
	count = 0;
	do {
		sum += count;
		count++;
	} while(count <= 100);
	printf("(3) do-while�� �̿� sum = %d\n", sum);
	
	printf("(4) ��� �Լ� �̿� sum = %d\n", allSum(n));

	return 0;
}
