#include "method.h"


int absolute_47(int n) {
	return abs(n);
}

int problem_47() {
	int num;
	printf("������ �Է��ϰ� Enter> ");
	scanf("%d", &num);

	printf("\n%d�� ���밪 %d \n", num, absolute_47(num));

	return 0;
}
