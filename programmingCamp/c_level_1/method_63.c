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

	printf("��ǥ�� ���� Ȯ���ϴ� ���α׷�\n");

	printf("ù ��° x��ǥ �Է� : ");
	scanf("%d", &c1.x);
	printf("ù ��° y��ǥ �Է� : ");
	scanf("%d", &c1.y);

	printf("ù ��° x��ǥ �Է� : ");
	scanf("%d", &c2.x);
	printf("�� ��° y��ǥ �Է� : ");
	scanf("%d", &c2.y);

	check = is_same_circle(&c1, &c2);

	if(check == 1) {
		printf("��� : �� ��ǥ�� �����ϴ�. \n");
	} else {
		printf("��� : �� ��ǥ�� �ٸ��ϴ�. \n");
	}

	return 0;
}

