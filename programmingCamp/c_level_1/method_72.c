#include "method.h"

int problem_72() {
	int hour, min, sec;

	printf("��, ��, �ʸ� �Է¹޾� �ʷ� ����ϴ� ���α׷�\n");

	printf("�ð��� �Է� : ");
	scanf("%d�ð� %d�� %d��", &hour, &min, &sec);

	sec += (hour* 3600);
	sec += (min * 60);

	printf("��� : %d�� \n", sec);

	return 0;
}