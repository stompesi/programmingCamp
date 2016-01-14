#include "method.h"

#define GET_AREA(r) 3.14*r*r

struct point {
	double x;
	double y;
};

struct circle {
	struct point center;
	double radius;
};

int problem_35() {
	struct circle *p_circle;

	printf("35. ���� �߽���, ������, ������ ����ϴ� ���α׷�.\n");

	p_circle = malloc(sizeof(struct circle));
	p_circle->center.x = 2.89;
	p_circle->center.y = 4.25;
	p_circle->radius = 3.48;

	printf("�� �߽���ǥ(%.2lf, %.2lf), ������ : %.2lf\n", p_circle->center.x, p_circle->center.y, p_circle->radius);
	printf("�� ����: %.2lf\n", GET_AREA(p_circle->radius));

	return 0;
}