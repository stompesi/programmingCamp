#include "method.h"
#define KILOMETER 1.60935

int problem_70() {
	double mile;
	double k = 0;
	printf("������ ų�ι��ͷ� ��ȯ�ϴ� ���α׷�\n");

	printf("���� �Է� : ");
	scanf("%lf", &mile);

	k = mile * KILOMETER;

	printf("kilometer : %lf\n", k);

	return 0;
}