#include "method.h"

struct Point_62{
	int x;
	int y;
};
typedef struct Point_62 Point_62;

int problem_62() {
	Point_62 start, end;
	int line = 0;

	printf("선의 길이를 구하는 프로그램\n");

	printf("시작점 x좌표를 입력 : ");
	scanf("%d", &start.x);
	printf("시작점 y좌표를 입력 : ");
	scanf("%d", &start.y);

	printf("끝점 x좌표를 입력 : ");
	scanf("%d", &end.x);
	printf("끝점 y좌표를 입력 : ");
	scanf("%d", &end.y);

	line = sqrt(pow(end.x - start.x, 2) + pow(end.y - start.y, 2));

	printf("선의 길이 : %d\n", line);

	return 0;
}