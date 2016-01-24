#include "method.h"

int problem_55() {
	char word[10];
	int i, sum = 0;

	printf("소문자 문자열 입력후 Enter> ");
	gets(word);

	for( i = 0 ; i < strlen(word) ; i++) {
		sum += (int)word[i];
	}

	printf("합계 : %d\n", sum);

	return 0;
}