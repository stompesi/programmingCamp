#include "method.h"

int problem_98() {
	int ary[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int (*ptr)[5];
	int i, j;

	ptr = ary;

	printf("원 행렬 값 : \n");
	printf("----------------------------\n");
	for( i = 0 ; i < 2; i++) {
		for(j = 0 ; j < 5; j++) {
			printf("|%3d ", ary[i][j]);
		}
		printf("|\n");
	}
	printf("\n");

	for( i = 0 ; i < 2 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			ptr[i][j] += 5;
		}
	}

	printf("계산 후 행렬 값 : \n");
	printf("----------------------------\n");
	for( i = 0 ; i < 2 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			printf("|%3d ", ary[i][j]);
		}
		printf("|\n");
	}
	printf("\n");

	return 0;
}