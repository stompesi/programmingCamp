#include "method.h"

int problem_38() {
	int a, n, i;
	double r, sum = 0;

	printf("38. n개월의 원리금 합계 계산 프로그램.\n");
	
	printf("불입액 : ");
	scanf("%d", &a);
	printf("월이율 : ");
	scanf("%lf", &r);
	printf("개월 수 : ");
	scanf("%d", &n);

	for(i = 0 ; i < n ; i++) {
		sum = sum + a;
		sum = sum*(1 + r);
	}

	printf("원리금 합계는 : %.3lf\n", sum);
	
	return 0;
}