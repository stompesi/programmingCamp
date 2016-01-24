#include "method.h"

void transpose(int a[4][4], int b[4][4]);

/*
*	행렬을 대각선을 기준으로 뒤바꾸는 프로그램
*/

int problem_9(){
	int i, j;
	int a[4][4] = {{5, 7, 4, 3},
				   {6, 1, 8, 3},
				   {3, 2, 7, 6},
				   {2, 5, 9, 1}};
	int b[4][4]={0};

	transpose(a, b);

	return 0;
}

void transpose(int a[4][4], int b[4][4]){
	int i, j, temp;

	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			b[i][j] = a[j][i];
		}
	}

	printf("1. a\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%2d", a[i][j]);
		}
		putchar('\n');
	}
	printf("2. b\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%2d", b[i][j]);
		}
		putchar('\n');
	}
}