#include "method.h"
<<<<<<< HEAD
#define RESULT 154

int problem_8() {
	int i, j;

	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			if(((10 * i) + j) + ((10 * j) + i) == RESULT) {
				printf("%d의 모든 조합은 %d%d + %d%d \n", RESULT, i, j, j, i);
			}
		}
	}
	return 0;
=======

#define ROW 4
#define COL 5

int problem_8() {
	int a[ROW][COL] = {
		{5, 7, 4, 3, 0},
		{6, 1, 8, 3, 0},
		{3, 2, 7, 6, 0},
		{0, 0, 0, 0, 0} };
	int i, j, sum;

	printf("행렬의 각 행, 열의 합을 구하는 프로그램.\n");

	// 각 행의 합
	for(i = 0; i < ROW - 1; i++) {
		sum = 0;
		for(j = 0; j < COL - 1; j++) {
			sum += a[i][j];
		}
		a[i][j] = sum;
	}

	// 각 열의 합
	for(j = 0; j < COL; j++) {
		sum = 0;
		for(i = 0; i < ROW - 1; i++) {
			sum += a[i][j];
		}
		a[i][j] = sum;
	}


	// 결과 출력
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL - 1; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("| %2d\n", a[i][j]);
		if(i == ROW - 2) {
			printf("------------+---\n");
		}
	}
>>>>>>> origin/feature/c/level_2/problem_8
}