#include "method.h"

typedef struct Point_35{
	double x;
	double y;
	double r;
}Point_35;

int problem_35() {
	Point_35 c1;
	Point_35 c2;
	double radius_sum = 0;
	double xy_length = 0;

	printf("<<�� ���� ���� ��ġ����, ���ϴ��� �ƴϸ� �������ִ����� �Ǻ��ϴ� ���α׷�>>\n\n");
	
	printf("c1���� x, y��ǥ�� ������(r)�� �Է��ϼ���.\n");
	printf("c1���� x ��ǥ : ");
	scanf("%lf", &c1.x);
	printf("c1���� y ��ǥ : ");
	scanf("%lf", &c1.y);
	printf("c1�� ������ : ");
	scanf("%lf", &c1.r);

	printf("c2���� x ��ǥ : ");
	scanf("%lf", &c2.x);
	printf("c2���� y ��ǥ : ");
	scanf("%lf", &c2.y);
	printf("c2�� ������ : ");
	scanf("%lf", &c2.r);

	radius_sum = c1.r + c2.r;
	xy_length = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));

	if(radius_sum == xy_length) {
		printf("��� : �� ���� ���Ѵ�.\n");
	} else if(radius_sum < xy_length) {
		printf("��� : �� ���� ������ �ʴ´�.\n");
	} else {
		printf("��� : �� ���� ��ģ��.\n");
	}

	return 0;
}