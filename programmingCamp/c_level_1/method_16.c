#include "method.h"

int problem_16() {
	char *ptr = "program";
	
	printf("16. \"program\" 에서 맨 앞글자를 하나씩 없애면서 출력하는 프로그램.\n");
	
	while(*ptr != '\0') {
		printf("%s\t\t%c\n", ptr, *ptr - ('a'-'A'));
		ptr++;
	}
}