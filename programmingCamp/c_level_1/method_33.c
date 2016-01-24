#include "method.h"
#define N 100

int problem_33() {
	char word[N];
	char *p;
	int count = 0;
	p = word;
	
	printf("사용자가 입력한 문자열에서 알파벳 문자를 세는 프로그램\n");
	printf("문자열 입력 : ");
	gets(word);
	while(*p != '\0') {
		*p = tolower(*p);
		if(*p >= 'a' && *p<='z') {
			count++;
		}
		p++;
	}

	printf("알파벳 문자수 : %d\n", count);

	return 0;
}