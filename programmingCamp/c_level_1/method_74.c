#include "method.h"

int problem_74() {
	int count = 1, i;
	while(count < 20) {
		count = count + 3;
		printf("%d ", count);
	}
	printf("\n");
	
	for(i = 1 ; i < 20 ; i+=3) {
		printf("%d ", i + 3);
	}
	printf("\n");
	
	count = 1;
	do {
		count = count + 3;
		printf("%d ", count);
	} while(count < 20);
	printf("\n");
}