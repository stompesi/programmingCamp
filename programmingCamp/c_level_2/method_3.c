#include "method.h"

/*
*	구구단 출력
*/

int problem_3(){
	int i, j;

	printf("*  1  2  3  4  5  6  7  8  9\n");

	for(i=1; i<10; i++){
		printf("%d", i);
		for(j=1; j<10; j++){
			printf("%3d", i*j);
		}
		putchar('\n');
	}

	return 0;
}