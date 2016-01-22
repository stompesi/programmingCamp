#include "method.h"

int problem_7() {
	int i, j;

	for (i = 1; i < 10; i++) {
		for (j = 2; j < 10; j++) {
			printf("%dx%d = %2d ", j, i, i*j);
		}
		printf("\n");
	}
}