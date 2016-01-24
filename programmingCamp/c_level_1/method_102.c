#include "method.h"

int problem_102() {
	int count;

	for(count = 0; count <= 10; count++) {
		printf("%d ", count);
	}
	printf("\n");

	count = 0;

	LabelGo:
	printf("%d ", count);
	if(++count <= 10) {
		goto LabelGo;
	}

	return 0;
}