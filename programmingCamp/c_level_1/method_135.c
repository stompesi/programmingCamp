#include "method.h"

int problem_135() {
	char word[100];
	int alphabet[92] = { 0 };
	int i, n = 0;
	char *p = word;

	printf("정수입력: ");
	gets(word);
	fflush(stdin);

	for( i = 0 ; i < strlen(word) ; i++) {
		if(p[i]>=97 && p[i]<=123) {
			p[i] = toupper(p[i]);
		}

		n = (int)p[i];
		alphabet[n]++;
	}

	for(i = 65 ; i < 91 ; i++) {
		printf("%c: %d  ", (char)i, alphabet[i]);
	}
	printf("\n");

	return 0;
}