#include "method.h"

int problem_108() {
	char c;
	int i;

	printf("���� �Է� : ");
	scanf("%c", &c);

	printf("10����: %d, 8����: %o, 16����: %x, ", c, c, c);

	printf("2����: ");
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