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

	printf("my_strlen_61()�Լ� ���α׷�\n");
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(word);

	n = my_strlen_61(word);
	printf("�Է��� ���ڿ��� ���� : %d\n", n);

	return 0;
}
