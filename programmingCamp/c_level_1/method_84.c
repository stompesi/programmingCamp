#include "method.h"

int problem_84() {
	int n[10];
	int count[11] = { 0 };
	int i;

	for( i = 0 ; i < 10 ; i++) {
		printf("%d��° �Է� : ", i+1);
		scanf("%d", &n[i]);
		count[n[i]]++;
	}

	printf("��� : \n");
	for(i = 1 ; i < 11 ; i++) {
		if(count[i] != 0) {
			printf("%2d : %2d \n", i, count[i]);
		}
	}
	return 0;
}