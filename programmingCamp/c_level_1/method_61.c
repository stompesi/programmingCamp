#include "method.h"

int my_strlen_61(char *p) {
	int count = 0;
	while(*p != '\0') {
		count++;
		p++;
	}
	return count;
}

int problem_61() {
	char word[100];
	int n = 0;

	printf("my_strlen_61()함수 프로그램\n");
	printf("문자열을 입력하세요 : ");
	gets(word);

	n = my_strlen_61(word);
	printf("입력한 문자열의 길이 : %d\n", n);

	return 0;
}
