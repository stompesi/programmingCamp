#include"method.h"
#include<stdio.h>
struct point{
	int x;
	int y;
};
struct rect{
	struct point pt1;
	struct point pt2;
};

void problem_4(){
	struct point input_point, input_rect_point1, input_rect_point2;
	
	printf("점의 위치를 입력하시오.\n");
	printf("x >> ");
	scanf("%d", &input_point.x);
	printf("y >> ");
	scanf("%d", &input_point.y);

}
