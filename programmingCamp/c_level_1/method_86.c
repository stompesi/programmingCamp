#include "method.h"
#define MAX 256

void my_copy(char *string1, char *string2) {
	int count = 0, i;

	while(string2[count] != '\0') {
		count++;
	}

	for( i = 0 ; i < count ; i++) {
		string1[i] = string2[i];
	}
	string1[count] = '\0';
}

int problem_86() {
	char string1[MAX], string2[MAX];

	printf("Input String : ");
	gets(string2);
	my_copy(string1, string2);
	printf("°á°ú : %s\n", string1);
}

