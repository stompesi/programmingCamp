#include "method.h"

int problem_87() {
	char word[10][100];
	int i, j;
	char temp[100];

	for( i = 0 ; i < 10 ; i++) {
		fflush(stdin);
		printf("%2d번 문자열 입력>> ", i + 1);
		gets(word[i]);
	}

	printf("\n입력된 문자열 출력 : \n");
	for( i = 0 ; i < 10 ; i++) {
		printf("%d번 : %s\n", i + 1, word[i]);
	}

	for( i = 0 ; i < 10 ; i++) {
		for(j = 0 ; j < 10 ; j++) {
			if(strcmp(word[i], word[j]) == -1) {
				strcpy(temp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], temp);
			}
		}
	}
	printf("\n");
	printf("정렬된 결과\n");
	for( i = 0 ; i < 10 ; i++) {
		printf("%d번 : %s\n", i + 1, word[i]);
	}
	return 0;
}