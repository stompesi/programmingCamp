#include "method.h"

int problem_57() {
	char word[100];
	int i;

	printf("��ҹ��ڸ� �ٲٴ� ���α׷��Դϴ�.\n");
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(word);

	for( i = 0 ; i < strlen(word) ; i++) {
		if(isupper(word[i])) {
			word[i] = tolower(word[i]);
		} else {
			word[i] = toupper(word[i]);
		}
	}

	printf("��ȯ�� ���ڿ� : ");
	printf("%s\n", word);
	return 0;
}