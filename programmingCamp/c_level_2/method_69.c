#include "method.h"

/*
*	������ ����� ������ �ٿ� ������ �� ���
*/

int problem_69(){
	int i, j, result, sum;

	for(i = 1; i < 10; i++){		// ���η� ���
		for(j = 2; j < 10; j++){
			printf("%dx%d=%2d ", j, i, i * j);
		}
		putchar('\n');
	}

	for(i = 2; i < 10; i++){		// ���η� ���
		sum = 0;
		for(j = 1; j < 10;j++){
			sum += i*j;
		}
		printf("   %3d ", sum);
	}
	putchar('\n');
	return 0;
}