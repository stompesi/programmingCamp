#include "method.h"

int rstrlen(char *word, int length) {
	if(word[length] == '\0') {
		return length;
	} else {
		return rstrlen(word, length + 1);
	}
}

int problem_94() {
	char word[100];
	int length = 0;

	printf("��ȯ�Լ��� ���ڿ� ���� ���ϴ� ���α׷�\n");

	printf("���ڿ� �Է� : ");
	gets(word);

	printf("���ڿ� ���� : %d\n", rstrlen(word, length));

	return 0;
}

