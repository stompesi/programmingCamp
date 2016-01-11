#include "method.h"
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
}