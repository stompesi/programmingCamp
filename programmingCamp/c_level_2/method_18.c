#include "method.h"

/*
*	중첩된 반복문을 이용해
*	012345를 하나씩 공백으로 변환하여 출력
*/
int problem_18(){
	int i, j, n;

	for(i = 0; i < 6; i++){
		for(j = 0; j < i; j++){
			putchar(' ');
		}
		for(j = i; j < 6; j++){
			printf("%d", j);
		}
		putchar('\n');
	}

	return 0;
}