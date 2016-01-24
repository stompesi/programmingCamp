#include "method.h"

int problem_136() {
	char word[100];
	char result[100] = "";
	char *p = word;
	int length = 0, index = 0;

	printf("문자열 입력: ");
	gets(word);
	fflush(stdin);

	while(p[length] != '\0') {
		if(p[length] == 'a' || p[length] == 'A' || p[length] == 'e' || p[length] == 'E' || p[length] == 'i' || p[length] == 'I' || p[length] == 'o' || p[length] == 'O' || p[length] == 'u' || p[length] == 'U') {
			length++;
		} else {
			result[index] = p[length];
			index++;
			length++;
		}
	}

	printf("result = %s\n", result);
	return 0;
}