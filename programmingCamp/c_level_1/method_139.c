#include "method.h"

int problem_139() {
	char word[100];
	char *p;
	int length = 0, i;
	int aeiou[5] = { 0 };

	printf("ют╥б: ");
	gets(word);
	fflush(stdin);

	p = word;

	while(p[length] != '\0') {
		if(p[length] == 'a' || p[length] == 'A') {
			aeiou[0]++;
		} else if(p[length] == 'e' || p[length] == 'E') {
			aeiou[1]++;
		} else if(p[length] == 'i' || p[length] == 'I') {
			aeiou[2]++;
		} else if(p[length] == 'o' || p[length] == 'O') {
			aeiou[3]++;
		} else if(p[length] == 'u' || p[length] == 'U') {
			aeiou[4]++;
		}
		length++;
	}
	printf("(1) length = %d\n", length);

	printf("(2) ");
	for(i = length ; i >= 0 ; i--) {
		printf("%c", p[i]);
	}
	printf("\n");

	printf("(3)\n");
	printf("a: %d\n", aeiou[0]);
	printf("e: %d\n", aeiou[1]);
	printf("i: %d\n", aeiou[2]);
	printf("o: %d\n", aeiou[3]);
	printf("u: %d\n", aeiou[4]);
	
	return 0;
}