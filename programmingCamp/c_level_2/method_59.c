#include "method.h"

int problem_59() {
	char* money_str[10] = { "5����", "1����", "5õ��", "1õ��", "500��", "100��", "50��", "10��", "5��", "1��" };
	int unit[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 };
	int sum, i;

	printf("�ݾ��� �Է� : ");
	scanf("%d", &sum);

	for(i = 0; i < 10; i++) {
		printf("%5s: %d\n", money_str[i], sum / unit[i]);
		sum = sum % unit[i];
	}
	
	return 0;
}