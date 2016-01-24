#include "method.h"

int problem_78() {
	int n, i, j;
	printf("*을 입력한 수만큼 출력하는 프로그램\n");

	printf("n을 입력 : ");
	scanf("%d", &n);

	printf("결과 출력 : \n");

	for(i = 1 ; i <= n ; i++) {
		for(j = 1; j <= i ; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}