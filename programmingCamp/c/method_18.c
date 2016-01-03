#include "method.h"
#include <malloc.h>

int problem_18() {
	int n, i, max;
	int *ptr;

	printf("18. 동적할당을 이용하여 정수 n개를 입력받아 가장 큰 값을 구하는 프로그램.\n");

	printf("정수의 개수 n : ");
	scanf("%d", &n);
	if(n < 0) {
		printf("0보다 큰 값을 입력하세요.\n");
		return 0;
	}

	ptr = malloc(n*sizeof(int));

	for(i = 0; i < n; i++) {
		printf("%d번째 정수 : ", i + 1);
		scanf("%d", &ptr[i]);
	}

	max = ptr[0];
	for(i = 1; i < n; i++) {
		if(ptr[i] > max) {
			max = ptr[i];
		}
	}

	printf("가장 큰 정수 : %d\n", max);

	return 0;
}