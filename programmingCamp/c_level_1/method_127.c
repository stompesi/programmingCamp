#include "method.h"

int problem_127() {
	int n, i;
	
	printf("약수 구하는 프로그램\n");

	printf("수입력 : ");
	scanf("%d", &n);

	printf("약수 : ");
	for(i = 1 ; i <= n ; i++) {
		if(n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}