#include "method.h"

int problem_138() {
	char word[100];
	char *p, temp=' ';
	int i;

	printf("�Է�: ");
	gets(word);
	fflush(stdin);

	p = word;
	
	printf("���: ");
	for(i = 0 ; i < strlen(word) ; i++) {
		if(p[i] != temp) {
			temp = p[i];
			printf("%c", temp);
		} else {
			if(p[i] == ' ') {
				printf("%c", p[i]);
			}
		}
	}
	printf("\n");
	return 0;
}