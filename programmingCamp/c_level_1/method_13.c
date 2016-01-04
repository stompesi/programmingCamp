#include "method.h"

#define MAX_ROW 3
#define MAX_COL 4

int problem_13() {
	int a[MAX_ROW][MAX_COL], i, j;

	for(i = 0; i < MAX_ROW; i++) {
		for (j = 0; j < MAX_COL; j++) {
			a[i][j] = i*j;
		}
	}

	printf("%2c", '*');
	for(i = 0; i < MAX_COL; i++) {
		printf("%2d", i);
	}
	printf("\n");

	for(i = 0; i < MAX_ROW; i++) {
		printf("%2d", i);
		for(j = 0; j < MAX_COL; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
}