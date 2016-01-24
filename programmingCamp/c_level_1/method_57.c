#include "method.h"

int problem_57() {
	char word[100];
	int i;

	printf("대소문자를 바꾸는 프로그램입니다.\n");
	printf("문자열을 입력하세요 : ");
	gets(word);

	for( i = 0 ; i < strlen(word) ; i++) {
		if(isupper(word[i])) {
			word[i] = tolower(word[i]);
		} else {
			word[i] = toupper(word[i]);
		}
	}

	printf("변환된 문자열 : ");
	printf("%s\n", word);
	return 0;
}