#include "method.h"

void except_space_59(char *p) {
	int i;
	for( i = 0 ; i < strlen(p); i++) {
		if(p[i] != ' ')
			printf("%c", *(p + i));
	}
	printf("\n");
}

int problem_59() {
	char word[100];
	printf("공백문자를 제거한 문자열 출력 프로그램\n");

	printf("공백을 포함한 문자열 입력 : ");
	gets(word);
	
	printf("공백 제거 문자열 : ");
	except_space_59(word);

	return 0;
}

