#include "method.h"

int problem_2() {
	double a, b, c;

	printf("�� ���� ���̸� �Է��ϼ��� : ");

	scanf("%lf %lf %lf", &a, &b, &c);

	// ���� ū ���� ������ �� ���� �պ��� �۾ƾ� �ﰢ���� ����
	// ���� ū ���� ������ �� ���� ������ �հ� ���ƾ� ���� �ﰢ���� ����
	// �� ���� ���̸� ������ �̵ �ﰢ��, �ٸ� �ϳ��� ������ ���ﰢ��
	// �������� �Ϲ� �ﰢ��

	if (a + b <= c || a + c <= b || b + c <= a) {
		printf("�ﰢ�� �ƴ�\n");
	}
	else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
		printf("�����ﰢ��\n");
	}
	else if (a == b || a == c || b == c) {
		if (a == b && b == c) {
			printf("���ﰢ��\n");
		} else {
			printf("�̵ �ﰢ��\n");
		}
	} else {
		printf("�Ϲ� �ﰢ��\n");
	}	
	
	return 0;
}