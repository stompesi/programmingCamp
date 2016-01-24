#include "method.h"

int problem_80() {
	char buf[128];
	int count[5] = { 0 };
	char mo1[5] = { 'a', 'e', 'i', 'o', 'u' };
	char mo2[5] = { 'A', 'E', 'I', 'O', 'U' };
	int i = 0, j;

	printf("ют╥б: ");
	gets(buf);
	
	while(buf[i] != '\0') {
		for(j = 0; j < 5; j++) {
			if (buf[i] == mo1[j] || buf[i] == mo2[j]) {
				count[j]++;
			}
		}
		i++;
	}
	printf("(1) length = %d\n", i);

	printf("(2) ");
	while(i > 0) {
		i--;
		putchar(buf[i]);
	}
	printf("\n");

	printf("(3)\n");
	for(j = 0; j < 5; j++) {
		printf("%c: %d\n", mo1[j], count[j]);
	}

	return 0;
}