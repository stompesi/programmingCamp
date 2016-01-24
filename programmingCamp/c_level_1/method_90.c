#include "method.h"

int problem_90() {
	int i;

	for(i = 1 ; i < 101 ; i++) {
		if(i % 2 == 0) {
			printf("%3d ", i);
		} else {
			continue;
		}
		if(i % 20 == 0) {
			printf("\n");
		}
	}

	return 0;
}