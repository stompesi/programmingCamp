#include "method.h"

static int count = 0;

int fibonacci_sequence(int n) {
	count++;
	if(n <= 2) {
		return 1;
	} else {
		return fibonacci_sequence(n - 1) + fibonacci_sequence(n - 2);
	}
}

int problem_9() {
	int n, i;
	
	printf("�Ǻ���ġ ���� �Լ��� ȣ���ϴ� Ƚ���� ����ϴ� ���α׷��Դϴ�.\n");
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		count = 0;
		if(i == n) {
			printf("%d", fibonacci_sequence(i));
		} else {
			printf("%d, ", fibonacci_sequence(i));
		}
		
	}
	printf("\n�� %d�� ȣ��Ǿ����ϴ�.\n", count);

	return 0;
}