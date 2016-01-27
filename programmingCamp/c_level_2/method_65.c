#include "method.h"

int problem_65() {
	int month, i, start_day = 1;
	int day_count[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("출력 월을 입력: ");
	scanf("%d", &month);

	printf("일 월 화 수 목 금 토\n");

	for(i = 1; i < month; i++) {
		start_day += day_count[i-1] % 7;
		start_day %= 7;
	}

	for(i = 0; i < start_day; i++) {
		printf("   ");
	}

	for(i = 1; i <= day_count[month - 1]; i++) {
		printf("%2d ", i);
		start_day++;
		if(start_day % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}