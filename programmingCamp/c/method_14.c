#include "method.h"

#define MAX 10

int max_sub_min(int arr[]);

int problem_14() {
	int a[MAX], i, result;

	printf("10개의 정수를 입력받아 (최대-최소)의 값을 구하는 프로그램.\n");
	
	for(i = 0; i < MAX; i++) {
		printf("%2d번째 정수 : ", i + 1);
		scanf("%d", &a[i]);
	}
	result = max_sub_min(a);

	printf("결과 : %d\n", result);
}

int max_sub_min(int arr[]) {
	int max = arr[0], min = arr[0], i;

	for(i = 1; i < MAX; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	return max - min;
}