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

	printf("<<두 개의 원이 겹치는지, 접하는지 아니면 떨어져있는지를 판별하는 프로그램>>\n\n");
	
	printf("c1원의 x, y좌표와 반지름(r)을 입력하세요.\n");
	printf("c1원의 x 좌표 : ");
	scanf("%lf", &c1.x);
	printf("c1원의 y 좌표 : ");
	scanf("%lf", &c1.y);
	printf("c1의 반지름 : ");
	scanf("%lf", &c1.r);

	printf("c2원의 x 좌표 : ");
	scanf("%lf", &c2.x);
	printf("c2원의 y 좌표 : ");
	scanf("%lf", &c2.y);
	printf("c2의 반지름 : ");
	scanf("%lf", &c2.r);

	radius_sum = c1.r + c2.r;
	xy_length = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));

	if(radius_sum == xy_length) {
		printf("결과 : 두 원은 접한다.\n");
	} else if(radius_sum < xy_length) {
		printf("결과 : 두 원은 접하지 않는다.\n");
	} else {
		printf("결과 : 두 원은 겹친다.\n");
	}

	return 0;
}