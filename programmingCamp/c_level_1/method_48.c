#include "method.h"

int problem_48() {
	int count = 0;
	int a, b;

	srand(time(NULL));
	
	printf("구구단 문제\n\n");
	while(1) {
		if(count == 10) {
			break;
		}

		a = rand() % 9 + 1;
		b = rand() % 9 + 1;
		printf("%d * %d = ? \n", a, b);

		count++;	
	}

	return 0;
}