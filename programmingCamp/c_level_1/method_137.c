#include "method.h"
#define N 26

int problem_137() {
	char word[100];
	char lower[N] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char upper[N] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int lower_count[N] = { 0 };
	int upper_count[N] = { 0 };
	int i, j;
	char *p = word;

	printf("문장입력: ");
	gets(word);
	fflush(stdin);
	
	for( i = 0 ; i < strlen(word) ; i++) {
		for(j = 0 ; j < N ; j++) {
			if(p[i] == lower[j]) {
				lower_count[j]++;
			}
			if(p[i] == upper[j]) {
				upper_count[j]++;
			}
		}
	}

	for( i = 0 ; i < N ; i++) {
		if(lower_count[i] != 0) {
			printf("%c:%d ", lower[i], lower_count[i]);
		}
	}
	printf("\n");

	for( i = 0 ; i < N ; i++) {
		if(upper_count[i] != 0) {
			printf("%c:%d ", upper[i], upper_count[i]);
		}
	}
	printf("\n");
}