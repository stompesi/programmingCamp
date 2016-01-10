#include "method.h"

int gcd(int x, int y);

int problem_23() {
	int x, y;
	int result;

	printf("23. ��� �Լ��� �̿��Ͽ� �ִ������� ���ϴ� ���α׷�.\n");
	
	printf("�� ������ �Է��ϼ���.\n");
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	
	if(x > y) {
		result = gcd(x, y);
	}
	else {
		result = gcd(y, x);
	}

	printf("%d�� %d�� �ִ� ������� %d �Դϴ�.\n", x, y, result);

	return 0;
}

int gcd(int x, int y) {
	if(y == 0) {
		return x;
	}
	else {
		return gcd(y, x%y);
	}
}