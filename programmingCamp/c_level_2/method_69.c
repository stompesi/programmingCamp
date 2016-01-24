#include "method.h"

/*
*	구구단 출력후 마지막 줄에 세로줄 합 출력
*/

int problem_69(){
	int i, j, result, sum;

	for(i = 1; i < 10; i++){		// 가로로 출력
		for(j = 2; j < 10; j++){
			printf("%dx%d=%2d ", j, i, i * j);
		}
		putchar('\n');
	}

	for(i = 2; i < 10; i++){		// 세로로 계산
		sum = 0;
		for(j = 1; j < 10;j++){
			sum += i*j;
		}
		printf("   %3d ", sum);
	}
	putchar('\n');
	return 0;
}