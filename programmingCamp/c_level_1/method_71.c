#include "method.h"

int problem_71() {
	int sec;
	int hour = 0, minute = 0;

	printf("�ʸ� �Է��ϸ� ��,��,�ʷ� ��Ÿ���� ���α׷�\n");
	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &sec);

	hour = sec / 3600;
	minute = (sec - (3600 * hour)) / 60;
	sec = sec % 60;

	printf("��� : %d�� %d�� %d��\n", hour, minute, sec);

	return 0;
}