#include "method.h"

int problem_76() {
	char n[100];
	int num = 0, i, sum = 0, ten = 1, temp = 0;
	int two = 1, length = 0;

	printf("�������� �������� ��ȯ�ϴ� ���α׷�\n");

	printf("�������� �Է� : ");
	scanf("%s", n);

	length = strlen(n);

	for(i = length-1 ; i >= 0 ; i--) {
		num = atoi(&n[i]);
		num /= ten;
		temp = num * two;
		sum += temp;
		ten *= 10;
		two *= 2;
	}

	printf("��� : %d\n", sum);

	return 0;
}