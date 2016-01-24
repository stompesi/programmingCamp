#include "method.h"

int problem_53() {
	int a[3][3] = { { 2, 4, 6 }, { 8, 10, 12 }, { 14, 16, 18 } };
	int i, j, temp = 0;

	printf("orginal matrix\n");
	for( i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("transpose matrix\n");
	for( i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			if(i < j) {
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}
	
	for( i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}