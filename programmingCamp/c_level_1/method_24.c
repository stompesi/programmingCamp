#include "method.h"

void reverse_str(char *str) {
	int i;
	for(i = strlen(str)-1 ; i >= 0 ; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}
int problem_24() {
	char a[100];
	printf("�Է¹��� ���ڿ��� ������ ����ϴ� ���α׷��Դϴ�.\n");
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(a);

	printf("�Ųٷ� ����� ���ڿ� : ");
	reverse_str(a);

	return 0;
}