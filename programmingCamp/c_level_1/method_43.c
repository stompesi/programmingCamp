#include "method.h"

void reverse_num_43(int n) {
	if(n > 10) {
		printf("%d", n % 10);
		reverse_num_43(n / 10);
	} else {
		printf("%d", n);
	}
}
int problem_43() {
	int n;

	printf("������ �Ųٷ� ����ϴ� ���α׷�\n");

	printf("���ڸ� �Է�: ");
	scanf("%d", &n);
	printf("��� : ");
	reverse_num_43(n);
	printf("\n");
	return 0;
}