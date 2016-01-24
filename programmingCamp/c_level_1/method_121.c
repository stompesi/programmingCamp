#include "method.h"
#define N 5

int problem_121() {
	int arr[N] = { 10, 20, 30, 40, 51 };
	int sum = 0;
	double average = 0;
	int i, min = 0, max = 0;

	for(i = 0 ; i < N ; i++) {
		sum += arr[i];
	}

	average = (double)sum / N;

	printf("합=%d  평균=%.2lf\n", sum, average);

	printf("새로운 값 입력\n");
	for(i = 0 ; i < N ; i++) {
		printf("arr[%d] : ", i+1);
		scanf("%d", &arr[i]);
	}

	min = max = arr[0];

	for(i = 0 ; i < N ; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
		if(min > arr[i]) {
			min = arr[i];
		}
	}

	printf("min=%d  max=%d\n", min, max);

	return 0;
}