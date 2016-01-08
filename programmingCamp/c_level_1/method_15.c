#include "method.h"
#include <string.h>

#define MAX_LENGTH 512

int parseInt(char number_str[]);

int problem_15() {
	char number_str[MAX_LENGTH];
	int number_int;

	printf("15. 문자열을 입력 받아 정수로 바꾸는 프로그램.\n");
	printf("숫자를 입력하세요 : ");
	scanf("%s", number_str);

	number_int = parseInt(number_str);

	printf("문자열 \"%s\"은 정수 %d입니다.\n", number_str, number_int);
}

int parseInt(char number_str[]) {
	int number_int = 0, i, position = 1;
	char temp_number;

	for(i = strlen(number_str) - 1; i >= 0; i--) {
		temp_number = number_str[i];
		if(temp_number > '9' || temp_number < '0') {
			printf("숫자가 아닌 문자가 포함되어있습니다.\n");
			exit(0);
		}
		number_int += (temp_number - '0') * position;
		position *= 10;
	}

	return number_int;
}