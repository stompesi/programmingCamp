#include "method.h"

typedef struct Point_64{
	int x;
	int y;
}Point_64;

int problem_64() {
	int size, i;
	Point_64 *p;

	printf("Point_64 구조체 동적할당 프로그램\n");
	printf("===============================\n");
	printf("동적할당 크기 입력 : ");
	scanf("%d", &size);

	p = (Point_64*)malloc(sizeof(Point_64) * size);
	
	for( i = 0 ; i < size ; i++) {
		printf("%d번 x좌표 입력 : ", i + 1);
		scanf("%d", &p[i].x);
		printf("%d번 y좌표 입력 : ", i + 1);
		scanf("%d", &p[i].y);
		printf("-------------------------------\n");
	}

	printf("\n모든 좌표 출력\n");
	printf("===============================\n");
	for( i = 0 ; i < size ; i++) {
		printf("%d번 좌표 : ( %d, %d )\n", i + 1, p[i].x, p[i].y);
	}

	return 0;
}