#include "method.h"
#define N 10

int problem_73() {
	int num[N];
	int i, max = 0, count = 0;
	int *p;
	p = num;

	for( i = 0 ; i < N ; i++) {
		printf("%d번째 수 입력 : ", i + 1);
		scanf("%d", &num[i]);
	}

	max = num[0];
	do{
		if(*p > max)
			max = *p;
		p++;
		count++;
	} while(count != N);

	printf("가장 큰 값 : %d\n", max);

	return 0;
}