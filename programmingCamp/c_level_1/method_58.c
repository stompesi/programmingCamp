#include "method.h"

int problem_58() {
	char a[50];
	char b[50];

	printf("�� ���ڿ��� ���ϴ� ���α׷�\n");

	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(a);
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(b);

	if(strcmp(a, b) == 1) {
		printf("%s��(��) %s���� �� ū ���ڿ��Դϴ�. \n", a, b);
	} else if(strcmp(a, b) == -1) {
		printf("%s��(��) %s���� �� ū ���ڿ��Դϴ�. \n", b, a);
	} else {
		printf("�� ���ڿ��� ũ��� �����ϴ�. \n");
	}

	return 0;
}
