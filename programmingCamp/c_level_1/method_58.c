#include "method.h"

int problem_58() {
	char a[50];
	char b[50];

	printf("두 문자열을 비교하는 프로그램\n");

	printf("첫 번째 문자열을 입력하세요 : ");
	gets(a);
	printf("두 번째 문자열을 입력하세요 : ");
	gets(b);

	if(strcmp(a, b) == 1) {
		printf("%s이(가) %s보다 더 큰 문자열입니다. \n", a, b);
	} else if(strcmp(a, b) == -1) {
		printf("%s이(가) %s보다 더 큰 문자열입니다. \n", b, a);
	} else {
		printf("두 문자열의 크기는 같습니다. \n");
	}

	return 0;
}
