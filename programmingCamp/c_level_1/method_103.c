#include "method.h"

int problem_103() {
	double width, height, area = 0;
	
	printf("�غ�, ���� : ");
	scanf("%lf %lf", &width, &height);

	area = width * height / 2;

	printf("�غ�=%.2lfcm, ����=%.2lfcm�� �ﰢ���� ����=%.2lfcm��\n", width, height, area);

	return 0;
}