#include "method.h"

int problem_83() {
	char str[512];
	int i;

	printf("�Է�: ");
	gets(str);
	printf("���: ");
	i = strlen(str);

	while(i >= 0) {
		if(str[i] == ' ') {
			printf("%s ", &str[i + 1]);
			str[i] = '\0';
		}
		i--;
	}
	printf("%s\n", str);

	return 0;
}