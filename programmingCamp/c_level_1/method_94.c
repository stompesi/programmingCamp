#include "method.h"

int rstrlen(char *word, int length) {
	if(word[length] == '\0') {
		return length;
	} else {
		return rstrlen(word, length + 1);
	}
}

int problem_94() {
	char word[100];
	int length = 0;

	printf("순환함수로 문자열 길이 구하는 프로그램\n");

	printf("문자열 입력 : ");
	gets(word);

	printf("문자열 길이 : %d\n", rstrlen(word, length));

	return 0;
}

