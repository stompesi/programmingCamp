#include "method.h"

int problem_32() {
	int arr[5][5] = {
		78, 48, 78, 98, 0,
		99, 92, 83, 29, 0,
		29, 64, 83, 89, 0,
		34, 78, 92, 56, 0,
		0, 0, 0, 0, 0 };
	int i, j;

	printf("32. 표의 가로 합과 세로 합, 그리고 모든 합을 구하는 프로그램.\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][j] += arr[i][j];
			arr[4][4] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}