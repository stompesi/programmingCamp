#include "method.h"

int problem_42() {
	int i, j;

	for( i = 0 ; i <= 5 ; i++) {
		for(j = 0 ; j <= i ; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");

	for(i =  5; i >= 0 ; i--) {
		for(j = 0 ; j <= i ; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");

	for(i =5 ; i >= 0 ; i--) {
		for(j = i ; j >=0 ; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}