#include "method.h"

int problem_40() {
	char alphabet;

	printf("<<�빮��->�ҹ���, �ҹ���->�빮�ڷ� �ٲٴ� ���α׷�>>\n");

	printf("���ĺ� �Է� : ");
	scanf("%c", &alphabet);

	if(islower(alphabet)) {
		printf("��ȯ�� ���� : %c\n", toupper(alphabet));
	} else {
		printf("��ȯ�� ���� : %c\n", tolower(alphabet));
	}

	return 0;
}