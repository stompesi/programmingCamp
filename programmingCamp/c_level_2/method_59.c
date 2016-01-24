#include "method.h"

int problem_59() {
	char* money_str[10] = { "5만원", "1만원", "5천원", "1천원", "500원", "100원", "50원", "10원", "5원", "1원" };
	int unit[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 };
	int sum, i;

	printf("금액을 입력 : ");
	scanf("%d", &sum);

	for(i = 0; i < 10; i++) {
		printf("%5s: %d\n", money_str[i], sum / unit[i]);
		sum = sum % unit[i];
	}
	
	return 0;
}