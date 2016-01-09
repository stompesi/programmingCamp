#include "method.h"

#define ROW 4
#define COL 5

int problem_8() {
	int a[ROW][COL] = {
		{5, 7, 4, 3, 0},
		{6, 1, 8, 3, 0},
		{3, 2, 7, 6, 0},
		{0, 0, 0, 0, 0} };
	int i, j, sum;

	printf("����� �� ��, ���� ���� ���ϴ� ���α׷�.\n");

	// �� ���� ��
	for(i = 0; i < ROW - 1; i++) {
		sum = 0;
		for(j = 0; j < COL - 1; j++) {
			sum += a[i][j];
		}
		a[i][j] = sum;
	}

	// �� ���� ��
	for(j = 0; j < COL; j++) {
		sum = 0;
		for(i = 0; i < ROW - 1; i++) {
			sum += a[i][j];
		}
		a[i][j] = sum;
	}


	// ��� ���
	for(i = 0; i < ROW; i++) {
		for(j = 0; j < COL - 1; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("| %2d\n", a[i][j]);
		if(i == ROW - 2) {
			printf("------------+---\n");
		}
	}
}