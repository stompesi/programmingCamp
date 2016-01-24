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

	printf("원의 중심점, 면적 그리고 둘레를 구하는 프로그램\n");

	printf("x좌표 입력 : ");
	scanf("%d", &c1.x);
	printf("y좌표 입력 : ");
	scanf("%d", &c1.y);
	printf("반지름 입력 : ");
	scanf("%d", &c1.radius);

	printf("====결과====\n");
	printf("좌표 : ");
	get_xy(c1); 
	printf("\n");

	printf("면적 : %.1lf\n", get_area(c1.radius));
	printf("둘레 : %.1lf\n", get_round(c1.radius));

	return 0;
}
