#include "method.h"

void except_space_59(char *p) {
	int i;
	for( i = 0 ; i < strlen(p); i++) {
		if(p[i] != ' ')
			printf("%c", *(p + i));
	}
	printf("\n");
}

int problem_59() {
	char word[100];
	printf("���鹮�ڸ� ������ ���ڿ� ��� ���α׷�\n");

	printf("������ ������ ���ڿ� �Է� : ");
	gets(word);
	
	printf("���� ���� ���ڿ� : ");
	except_space_59(word);

	return 0;
}

