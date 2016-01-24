#include "method.h"

int problem_134() {
	char str1[] = "한성대학교";
	char str2[] = "컴퓨터공학과";
	char str3[100];

	strcpy(str3, str1);
	printf(" (1)str3 = %s\n", str3);

	strcat(str3, str2);
	printf(" (2)str3 = %s\n", str3);

	return 0;
}