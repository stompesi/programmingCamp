#include "method.h"

int problem_128() {
	char start, ch, blank;

	printf("<<1�����>>\n");
	for(start = 'a' ; start <= 'z' ; start++) {
		for(ch = 'a' ; ch <= start ; ch++) {
			putchar(ch);
		}
		putchar('\n');
	}
	printf("\n");

	printf("<<2�����>>\n");
	for(start = 'z' ; start >= 'a' ; start--) {
		for(ch = 'z' ; ch >= start ; ch--) {
			putchar(ch);
		}
		putchar('\n');
	}
	printf("\n");

	printf("<<3�����>>\n");
	for(start = 'z' ; start >= 'a' ; start--) {
		for(blank = start ; blank > 'a' ; blank--) {
			putchar(' ');
		}
		for(ch = start ; ch <= 'z' ; ch++) {
			putchar(ch);
		}
		putchar('\n');
	}
	printf("\n");

	printf("<<4�����>>\n");
	for(start = 'a' ; start <= 'z' ; start++) {
		for(blank = start ; blank < 'z' ; blank++) {
			putchar(' ');
		}
		for(ch = 'a' ; ch <= start ; ch++) {
			putchar(ch);
		}
		putchar('\n');
	}

	return 0;
}