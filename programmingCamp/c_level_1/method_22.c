#include "method.h"

int problem_22() {
	int x, y, r = 0;
	int temp = 0;

	printf("�ִ������� ���ϴ� ���α׷��Դϴ�.\n");
	
	printf("1��° ���� �Է� : ");
	scanf("%d", &x);
	
	printf("2��° ���� �Է� : ");
	scanf("%d", &y);

	if(x < y) {
		temp = x;
		x = y;
		y = temp;
	}

	while (1) {
		if(y == 0) {
			printf("�ִ����� : %d\n", x);
			exit(1);
		}
		r = x % y;
		x = y;
		y = r;
	}

	return 0;
}