#include "method.h"

int problem_16() {
	char *ptr = "program";
	
	printf("16. \"program\" ���� �� �ձ��ڸ� �ϳ��� ���ָ鼭 ����ϴ� ���α׷�.\n");
	
	while(*ptr != '\0') {
		printf("%s\t\t%c\n", ptr, *ptr - ('a'-'A'));
		ptr++;
	}
}