#include "method.h"

typedef struct Point_64{
	int x;
	int y;
}Point_64;

int problem_64() {
	int size, i;
	Point_64 *p;

	printf("Point_64 ����ü �����Ҵ� ���α׷�\n");
	printf("===============================\n");
	printf("�����Ҵ� ũ�� �Է� : ");
	scanf("%d", &size);

	p = (Point_64*)malloc(sizeof(Point_64) * size);
	
	for( i = 0 ; i < size ; i++) {
		printf("%d�� x��ǥ �Է� : ", i + 1);
		scanf("%d", &p[i].x);
		printf("%d�� y��ǥ �Է� : ", i + 1);
		scanf("%d", &p[i].y);
		printf("-------------------------------\n");
	}

	printf("\n��� ��ǥ ���\n");
	printf("===============================\n");
	for( i = 0 ; i < size ; i++) {
		printf("%d�� ��ǥ : ( %d, %d )\n", i + 1, p[i].x, p[i].y);
	}

	return 0;
}