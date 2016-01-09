#include "method.h"
#include <math.h>

double get_hypotenuse(double base, double height);

int problem_11() {
	// base : �غ�, height : ����, hypotenuse : ����
	double base, height, hypotenuse;

	printf("���� �ﰢ���� ������ ���̸� ���ϴ� ���α׷�.\n");

	printf("�ﰢ�� �غ� : ");
	scanf("%lf", &base);
	printf("�ﰢ�� ���� : ");
	scanf("%lf", &height);

	hypotenuse = get_hypotenuse(base, height);

	printf("������ ���̴� %.3lf", hypotenuse);
}

double get_hypotenuse(double base, double height) {
	return sqrt(base*base + height*height);
}