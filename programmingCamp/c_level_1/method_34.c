#include "method.h"

int problem_34() {
	char stmt[80];
	char *ps, *pe;

	printf("ȸ���� �Ǻ��ϴ� ���α׷��Դϴ�.\n");
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(stmt);

	ps = stmt;
	pe = &stmt[strlen(stmt) - 1];

	while(1) {
		if(ps == pe) {
			printf("ȸ���Դϴ�.\n");
			break;
		}
		if(*ps == *pe) {
			ps++;
			pe--;
		} else {
			printf("ȸ���� �ƴմϴ�.\n");
			break;
		}
	}
	return 0;
}