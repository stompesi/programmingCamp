#include "method.h"
#define N 10

int problem_73() {
	int num[N];
	int i, max = 0, count = 0;
	int *p;
	p = num;

	for( i = 0 ; i < N ; i++) {
		printf("%d��° �� �Է� : ", i + 1);
		scanf("%d", &num[i]);
	}

	max = num[0];
	do{
		if(*p > max)
			max = *p;
		p++;
		count++;
	} while(count != N);

	printf("���� ū �� : %d\n", max);

	return 0;
}