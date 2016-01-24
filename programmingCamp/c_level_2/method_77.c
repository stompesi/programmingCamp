#include "method.h"

int problem_77() {
	int number[2][35];
	int i, j;

	srand(time(NULL));

	for(i = 0; i < 35; i++) {
		while(1) {
			number[0][i] = rand() % 99 + 1;
			for(j = 0; j < i; j++) {
				if(number[0][j] == number[0][i]) {
					continue;
				}
			}
			break;
		}
		while(1) {
			number[1][i] = rand() % 99 + 1;
			if(number[0][i] == number[1][i]) {
				continue;
			}
			for(j = 0; j < i; j++) {
				if(number[0][j] == number[0][i]) {
					continue;
				}
			}
			break;
		}
	}

	for(i = 0; i < 7; i++) {
		for(j = 0; j < 5; j++) {
			printf("[%02d]:%02d %02d    ", i + 7 * j + 1, number[0][i + 7 * j], number[1][i + 7 * j]);
		}
		printf("\n");
	}
	return 0;
}