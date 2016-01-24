#include "method.h"

int problem_34() {
	char stmt[80];
	char *ps, *pe;

	printf("회문을 판별하는 프로그램입니다.\n");
	printf("문자열을 입력하세요 : ");
	gets(stmt);

	ps = stmt;
	pe = &stmt[strlen(stmt) - 1];

	while(1) {
		if(ps == pe) {
			printf("회문입니다.\n");
			break;
		}
		if(*ps == *pe) {
			ps++;
			pe--;
		} else {
			printf("회문이 아닙니다.\n");
			break;
		}
	}
	return 0;
}