#include "method.h"

int problem_87() {
	char word[10][100];
	int i, j;
	char temp[100];

	for( i = 0 ; i < 10 ; i++) {
		fflush(stdin);
		printf("%2d�� ���ڿ� �Է�>> ", i + 1);
		gets(word[i]);
	}

	printf("\n�Էµ� ���ڿ� ��� : \n");
	for( i = 0 ; i < 10 ; i++) {
		printf("%d�� : %s\n", i + 1, word[i]);
	}

	for( i = 0 ; i < 10 ; i++) {
		for(j = 0 ; j < 10 ; j++) {
			if(strcmp(word[i], word[j]) == -1) {
				strcpy(temp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], temp);
			}
		}
	}
	printf("\n");
	printf("���ĵ� ���\n");
	for( i = 0 ; i < 10 ; i++) {
		printf("%d�� : %s\n", i + 1, word[i]);
	}
	return 0;
}