#include "method.h"

typedef struct Rect_65{
	int x1, y1;
	int x2, y2;
}Rect_65;


int get_area_65(Rect_65 *p) {
	return ((p->x2) - (p->x1))*((p->y2) - (p->y1));
}
int problem_65() {
	Rect_65 r;
	int area = 0;

	printf("직사각형 면적을 구하는 프로그램\n");

	printf("첫 번째 좌표x : ");
	scanf("%d", &r.x1);
	printf("첫 번째 좌표y : ");
	scanf("%d", &r.y1);
	printf("두 번째 좌표x : ");
	scanf("%d", &r.x2);
	printf("두 번째 좌표y : ");
	scanf("%d", &r.y2);

	area = get_area_65(&r);

	printf("직사각형의 면적 : %d\n", area);

	return 0;
}
