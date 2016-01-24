#include "method.h"

int problem_108() {
	char c;
	int i;

	printf("문자 입력 : ");
	scanf("%c", &c);

	printf("10진수: %d, 8진수: %o, 16진수: %x, ", c, c, c);

	printf("2진수: ");
	for(i = 1 ; i <= 8 ; i++) {
		if(c >> (8 - i) & 1) {
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");

	return 0;
}