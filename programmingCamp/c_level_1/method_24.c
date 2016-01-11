#include "method.h"

void reverse_str(char *str) {
	int i;
	for(i = strlen(str)-1 ; i >= 0 ; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}
int problem_24() {
	char a[100];
	printf("입력받은 문자열을 역으로 출력하는 프로그램입니다.\n");
	printf("문자열을 입력하세요 : ");
	gets(a);

	printf("거꾸로 출력한 문자열 : ");
	reverse_str(a);

	return 0;
}