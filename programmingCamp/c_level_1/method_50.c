#include "method.h"

int problem_50() {
	char alphabet;
	int count=1, i;
	int capital[91] = { 0 };

	srand(time(NULL));
	
	while(1) {
		if(count > 100) {
			break;
		}

		alphabet = (rand() % (90-65 + 1)) + 65;
		capital[(int)alphabet]++;
		printf("%c ", alphabet);
		if(count % 20 == 0) {
			printf("\n");
		}
		count++;
	}

	printf("\n>>ºóµµ¼ö<<\n");
	count = 0;

	for(i = 65 ; i <= 90 ; i++) {
		printf("%c : %d\t", (char)i, capital[i]);
		count++;
		if(count % 3 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}