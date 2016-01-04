#include "method.h"
#include <string.h>

#define MAX_LENGTH 512

int parseInt(char number_str[]);

int problem_15() {
	char number_str[MAX_LENGTH];
	int number_int;

	printf("15. ���ڿ��� �Է� �޾� ������ �ٲٴ� ���α׷�.\n");
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%s", number_str);

	number_int = parseInt(number_str);

	printf("���ڿ� \"%s\"�� ���� %d�Դϴ�.\n", number_str, number_int);
}

int parseInt(char number_str[]) {
	int number_int = 0, i, position = 1;
	char temp_number;

	for(i = strlen(number_str) - 1; i >= 0; i--) {
		temp_number = number_str[i];
		if(temp_number > '9' || temp_number < '0') {
			printf("���ڰ� �ƴ� ���ڰ� ���ԵǾ��ֽ��ϴ�.\n");
			exit(0);
		}
		number_int += (temp_number - '0') * position;
		position *= 10;
	}

	return number_int;
}