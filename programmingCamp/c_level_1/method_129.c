#include "method.h"

int problem_129() {
	char str[20];
	int i, j, len;
	printf("문자열 입력: ");
	gets(str);
	
	len = 0;

	for( i = 0 ; i < 20 ; i++) {
		if((str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ' || (str[i]>='A'&&str[i] <='Z')) {
			len++;
		}
	}

	printf("문자열길이=%d\n", len);

	for(i = len ; i > 0 ; i--) {
		for(j = 0; j < i ; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}