#include "method.h"

struct Point_63{
	int x;
	int y;
};
typedef struct Point_63 Point_63;

int is_same_circle(Point_63 *c1, Point_63 *c2) {
	if(c1->x == c2->x) {
		if(c1->y == c2->y) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

int problem_63() {
	Point_63 c1, c2;
	int check = 0;

	printf("좌표가 같은 확인하는 프로그램\n");

	printf("첫 번째 x좌표 입력 : ");
	scanf("%d", &c1.x);
	printf("첫 번째 y좌표 입력 : ");
	scanf("%d", &c1.y);

	printf("첫 번째 x좌표 입력 : ");
	scanf("%d", &c2.x);
	printf("두 번째 y좌표 입력 : ");
	scanf("%d", &c2.y);

	check = is_same_circle(&c1, &c2);

	if(check == 1) {
		printf("결과 : 두 좌표는 같습니다. \n");
	} else {
		printf("결과 : 두 좌표는 다릅니다. \n");
	}

	return 0;
}

