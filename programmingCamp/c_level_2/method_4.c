#include"method.h"
#include<stdio.h>
#include<math.h>
struct point{
	int x;
	int y;
};
struct rect{
	struct point pt1;
	struct point pt2;
};
void set_point_locate(struct point* point){
	printf("x >> ");
	scanf("%d", &point->x);
	printf("y >> ");
	scanf("%d", &point->y);
}
int is_in_rectangle(struct point point, struct point* rect_point){
	int rect_width, rect_height;
	int result;
	rect_width = rect_point[0].x - rect_point[1].x;
	rect_height = rect_point[0].y - rect_point[1].y;

	if(rect_width > 0 && rect_height > 0){
		result =point.x <= rect_point[0].x && point.x >= rect_point[1].x &&
			point.y <= rect_point[0].y && point.y >= rect_point[1].y? 1 : 0;
	} else if(rect_width >0 && rect_height < 0){
		result =point.x <= rect_point[0].x && point.x >= rect_point[1].x &&
			point.y >= rect_point[0].y && point.y <= rect_point[1].y? 1 : 0;
	} else if(rect_width < 0 && rect_height > 0){
		result =point.x >= rect_point[0].x && point.x <= rect_point[1].x &&
			point.y <= rect_point[0].y && point.y >= rect_point[1].y? 1 : 0;
	} else if(rect_width < 0 && rect_height < 0){
		result =point.x >= rect_point[0].x && point.x <= rect_point[1].x &&
			point.y >= rect_point[0].y && point.y <= rect_point[1].y? 1 : 0;
	}

	return result;
}
void problem_4(){
	struct point input_point, input_rect_point[2];
	int i;
	printf("���� ��ġ�� �Է��Ͻÿ�.\n");
	set_point_locate(&input_point);

	printf("�簢�� ���� ��ġ�� �Է��Ͻÿ�\n");
	do{
		printf("1\n");
		set_point_locate(&input_rect_point[0]);
		printf("2\n");
		set_point_locate(&input_rect_point[1]);
	}while(input_rect_point[0].x == input_rect_point[1].x && input_rect_point[0].y == input_rect_point[1].y);

	if(is_in_rectangle(input_point, input_rect_point) == 1){
		printf("�簢�� �ȿ� �ִ�.\n");
	} else{
		printf("�簢�� �ۿ� �ִ�.\n");
	}
}