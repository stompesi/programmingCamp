#include "method.h"
#define KILOMETER 1.60935

int problem_70() {
	double mile;
	double k = 0;
	printf("마일을 킬로미터로 변환하는 프로그램\n");

	printf("마일 입력 : ");
	scanf("%lf", &mile);

	k = mile * KILOMETER;

	printf("kilometer : %lf\n", k);

	return 0;
}