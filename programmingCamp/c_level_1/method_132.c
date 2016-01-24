#include "method.h"
#define N 6

int problem_132() {
	int lotto[6], temp = 0;
	int i, j;
	char ch;

	srand(time(NULL));

	printf("행운의 Lotto 번호입니다.\n");

	here:
	for( i = 0 ; i < N ; i++) {
		lotto[i] = (rand() % 45) + 1;
	}
	fflush(stdin);

	for(i = 1 ; i < N ; i++) {
		for(j = 0 ; j < N-i; j++) {
			if(lotto[j] > lotto[j+1]) {
				temp = lotto[j];
				lotto[j] = lotto[j+1];
				lotto[j+1] = temp;
			}
		}
	}
	for( i = 0 ; i < N ; i++) {
		printf("%3d", lotto[i]);
	}

	printf("\n");
	printf("마음에 드십니까? (y/n): ");
	scanf("%c", &ch);
	fflush(stdin);
	
	if(ch == 'y') {
		return 0;
	} else {
		goto here;
	}
}