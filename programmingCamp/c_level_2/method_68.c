#include "method.h"

int problem_68() {
	int i, n = 1000, position = 10;

	for (i = 1; i <= n; i++) {
		if(i / position > 0) {
			position *= 10;
		}
		if((i*i) % position == i) {
			printf("%d:%d ", i, i*i);
		}
	}

	return 0;
}