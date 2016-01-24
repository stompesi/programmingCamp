#include "method.h"
#define PI 3.14

typedef struct Circle {
	int x;
	int y;
	int radius;
}Circle;


void get_xy(Circle c) {
	printf("( %d, %d )", c.x, c.y);
}

double get_area(int radius) {
	return (double) radius * (double)radius * PI;
}

double get_round(int radius) {
	return 2 * PI * (double)radius;
}

int problem_83() {
	Circle c1;

	printf("���� �߽���, ���� �׸��� �ѷ��� ���ϴ� ���α׷�\n");

	printf("x��ǥ �Է� : ");
	scanf("%d", &c1.x);
	printf("y��ǥ �Է� : ");
	scanf("%d", &c1.y);
	printf("������ �Է� : ");
	scanf("%d", &c1.radius);

	printf("====���====\n");
	printf("��ǥ : ");
	get_xy(c1); 
	printf("\n");

	printf("���� : %.1lf\n", get_area(c1.radius));
	printf("�ѷ� : %.1lf\n", get_round(c1.radius));

	return 0;
}
