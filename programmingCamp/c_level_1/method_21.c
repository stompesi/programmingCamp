#include "method.h"

int problem_21() {
	int n, p = 2;

	printf("���μ� �����ϴ� ���α׷��Դϴ�.\n");
	printf("���μ� ������ ���� n��? ");
	
	scanf("%d", &n);
	printf("%d�� ���μ����� : ", n);
	
	while (1) {
		if(n % p == 0) {
			n = n / p;
			if(n != 1) {
				printf("%dx", p);
			} else {
				printf("%d\n", p);
				break;
			}
		} else {
			p++;
		}
	}

	return 0;
}