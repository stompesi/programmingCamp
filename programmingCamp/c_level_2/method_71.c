#include "method.h"

void binary_71(int n);
void octal_71(int n);
void hexa_71(int n);

int problem_71() {
	int n = 76767;

	printf("n=%d\n", n);
	printf("2진법: ");
	binary_71(n);
	printf("\n");
	printf("8진법: ");
	octal_71(n);
	printf("\n");
	printf("16진법: ");
	hexa_71(n);
	printf("\n");

	return 0;
}

void binary_71(int n) {
	unsigned mask = 0x80000000;
	int i, is_start = 0;

	for (i = 0 ; i < 32 ; i++, mask >>= 1) {
		if ((n&mask) != 0) {
			printf("1");
			is_start = 1;
		}
		else {
			if(is_start == 1) {
				printf("0");
			}
		}
	}
}

void octal_71(int n) {
	char str[255];
	int i = 0, len = 0;

	while(n > 0) {
		str[i++] = n % 8;
		n /= 8;
		len++;
	}
	for(i = len - 1; i >= 0; i--) {
		printf("%d", str[i]);
	}
}

void hexa_71(int n) {
	char h[17] = "0123456789ABCDEF";
	char str[255];
	int i = 0;
	int len = 0;

	while(n > 0) {
		str[i++] = h[n%16];
		len++;
		n /= 16;
	}
	for(i = len - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}
