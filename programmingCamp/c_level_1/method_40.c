#include "method.h"

int problem_40() {
	char alphabet;

	printf("<<대문자->소문자, 소문자->대문자로 바꾸는 프로그램>>\n");

	printf("알파벳 입력 : ");
	scanf("%c", &alphabet);

	if(islower(alphabet)) {
		printf("변환된 문자 : %c\n", toupper(alphabet));
	} else {
		printf("변환된 문자 : %c\n", tolower(alphabet));
	}

	return 0;
}