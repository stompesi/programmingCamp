#include "method.h"

struct Point_62{
	int x;
	int y;
};
typedef struct Point_62 Point_62;

int problem_62() {
	Point_62 start, end;
	int line = 0;

	printf("���� ���̸� ���ϴ� ���α׷�\n");

	printf("������ x��ǥ�� �Է� : ");
	scanf("%d", &start.x);
	printf("������ y��ǥ�� �Է� : ");
	scanf("%d", &start.y);

	printf("���� x��ǥ�� �Է� : ");
	scanf("%d", &end.x);
	printf("���� y��ǥ�� �Է� : ");
	scanf("%d", &end.y);

	line = sqrt(pow(end.x - start.x, 2) + pow(end.y - start.y, 2));

	printf("���� ���� : %d\n", line);

	return 0;
}