#include "method.h"

int problem_100() {
	char ch;
	int i;

	printf("문자 입력 : ");
	scanf("%c", &ch);
	
	for(i = 1 ; i <= 8 ; i++) {
		if(ch >> (8 - i) & 1) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}