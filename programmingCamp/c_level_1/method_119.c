#include "method.h"

int problem_119() {
	int month, i;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int start_day = 0;
	
	printf("출력 월을 입력 : ");
	scanf("%d", &month);

	for(i = 1 ; i < month ; i++) {
		start_day += days[i];
	}

	start_day = (start_day % 7) + 1;

	printf("\n 일 월 화 수 목 금 토\n");
	//시작일 이전 공백을 출력
	if(start_day != 7) {
		for(i = 1; i <= start_day; i++) {
			printf("   ");
		}
	}

	for(i = 1 ; i <= days[month] ; i++) {
		printf(" %2d", i);
		if((start_day + i) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}