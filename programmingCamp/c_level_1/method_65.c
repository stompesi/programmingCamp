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

	printf("���簢�� ������ ���ϴ� ���α׷�\n");

	printf("ù ��° ��ǥx : ");
	scanf("%d", &r.x1);
	printf("ù ��° ��ǥy : ");
	scanf("%d", &r.y1);
	printf("�� ��° ��ǥx : ");
	scanf("%d", &r.x2);
	printf("�� ��° ��ǥy : ");
	scanf("%d", &r.y2);

	area = get_area_65(&r);

	printf("���簢���� ���� : %d\n", area);

	return 0;
}
