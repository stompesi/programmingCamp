#include "method.h"

int problem_134() {
	char str1[] = "�Ѽ����б�";
	char str2[] = "��ǻ�Ͱ��а�";
	char str3[100];

	strcpy(str3, str1);
	printf(" (1)str3 = %s\n", str3);

	strcat(str3, str2);
	printf(" (2)str3 = %s\n", str3);

	return 0;
}