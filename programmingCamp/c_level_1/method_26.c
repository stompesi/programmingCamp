#include "method.h"

int problem_26() {
	int n = 1, sum = 0;

	printf("1~n������ �� �� 1000�� �����ʴ� ���� ū �հ� �׶��� n�� ���ϴ� ���α׷�\n");
	
	while (1) {
		sum += n;
		if(sum > 1000) {
			sum -= n;
			n -= 1;
			break;
		}
		n++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}