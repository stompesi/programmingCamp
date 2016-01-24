#include"method.h"

struct Point_4 {
	int x;
	int y;
};

struct Rect_4 {
	struct Point_4 pt1;
	struct Point_4 pt2;
};
void set_point_4_locate(struct Point_4* Point_4) {
	printf("x >> ");
	scanf("%d", &Point_4->x);
	printf("y >> ");
	scanf("%d", &Point_4->y);
}
int is_in_rect_4angle(struct Point_4 Point_4, struct Point_4* Rect_4_Point_4) {
	int Rect_4_width, Rect_4_height;
	int result;
	Rect_4_width = Rect_4_Point_4[0].x - Rect_4_Point_4[1].x;
	Rect_4_height = Rect_4_Point_4[0].y - Rect_4_Point_4[1].y;

	if(Rect_4_width > 0 && Rect_4_height > 0) {
		result =Point_4.x <= Rect_4_Point_4[0].x && Point_4.x >= Rect_4_Point_4[1].x &&
			Point_4.y <= Rect_4_Point_4[0].y && Point_4.y >= Rect_4_Point_4[1].y? 1 : 0;
	} else if(Rect_4_width >0 && Rect_4_height < 0) {
		result =Point_4.x <= Rect_4_Point_4[0].x && Point_4.x >= Rect_4_Point_4[1].x &&
			Point_4.y >= Rect_4_Point_4[0].y && Point_4.y <= Rect_4_Point_4[1].y? 1 : 0;
	} else if(Rect_4_width < 0 && Rect_4_height > 0) {
		result =Point_4.x >= Rect_4_Point_4[0].x && Point_4.x <= Rect_4_Point_4[1].x &&
			Point_4.y <= Rect_4_Point_4[0].y && Point_4.y >= Rect_4_Point_4[1].y? 1 : 0;
	} else if(Rect_4_width < 0 && Rect_4_height < 0) {
		result =Point_4.x >= Rect_4_Point_4[0].x && Point_4.x <= Rect_4_Point_4[1].x &&
			Point_4.y >= Rect_4_Point_4[0].y && Point_4.y <= Rect_4_Point_4[1].y? 1 : 0;
	}

	return result;
}

int problem_4() {
	struct Point_4 input_Point_4, input_Rect_4_Point_4[2];
	int i;

	printf("점의 위치를 입력하시오.\n");
	set_point_4_locate(&input_Point_4);

	printf("사각형 점의 위치를 입력하시오\n");
	do {
		printf("1\n");
		set_point_4_locate(&input_Rect_4_Point_4[0]);
		printf("2\n");
		set_point_4_locate(&input_Rect_4_Point_4[1]);
	} while(input_Rect_4_Point_4[0].x == input_Rect_4_Point_4[1].x && input_Rect_4_Point_4[0].y == input_Rect_4_Point_4[1].y);

	if(is_in_rect_4angle(input_Point_4, input_Rect_4_Point_4) == 1) {
		printf("사각형 안에 있다.\n");
	} else {
		printf("사각형 밖에 있다.\n");
	}

	return 0;
}