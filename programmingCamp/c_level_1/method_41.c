#include "method.h"

int problem_41() {
	int salary;
	int tax = 0;

	printf("������ �Է��ϸ� ������ ������ ����ϴ� ���α׷�\n");
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &salary);

	if(salary <= 1000) {
		tax = salary / 100 * 9;
	} else if(salary > 1000 && salary <= 4000) {
		tax = salary / 100 * 18;
	} else if(salary > 4000 && salary <= 8000) {
		tax = salary / 100 * 27;
	} else {
		tax = salary / 100 * 36;
	}

	printf("������ ���� : %d ����\n", tax);

	return 0;
}