#include "method.h"

int problem_88() {
	char letter;
	int i = 1, n = 0;

	printf("�ڵ� ��ȯ ���α׷�\n");

	printf("���� �Է� : ");
	scanf("%c", &letter);
	
	while(!kbhit()) {
		printf("��ȯ ��� : %c\n", letter + i);
		i++;
		Sleep(1000);
	}

	return 0;
}