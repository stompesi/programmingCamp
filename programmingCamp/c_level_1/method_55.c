#include "method.h"

int problem_55() {
	char word[10];
	int i, sum = 0;

	printf("�ҹ��� ���ڿ� �Է��� Enter> ");
	gets(word);

	for( i = 0 ; i < strlen(word) ; i++) {
		sum += (int)word[i];
	}

	printf("�հ� : %d\n", sum);

	return 0;
}