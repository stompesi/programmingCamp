#include "method.h"

int sumodd(int x) {
	if(x <= 0) {
		return 0;
	}
	if(x % 2 == 0) {
		return sumodd(x - 1);
	}
	else {
		return x + sumodd(x - 1);
	}
}

int problem_85() {
	int n, sum = 0;

	printf("입력한 수까지의 홀수들만 더하는 프로그램\n");

	printf("n입력 : ");
	scanf("%d", &n);

	sum = sumodd(n);
	printf("홀수들의 합 : %d\n", sum);

	return 0;
}
