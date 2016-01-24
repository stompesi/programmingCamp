#include "method.h"

int problem_117() {
	char day[7][3] = { "일", "월", "화", "수", "목", "금", "토" };
	int start_day;
	int i;

	printf("시작 요일 입력 (일요일:1 ~ 토요일:7) : ");
	scanf("%d", &start_day);

	for(i = 0 ; i < 7 ; i++) {
		printf("  %s", day[i]);
	}
	printf("\n");
	
	for(i = 1 ; i <= start_day-1 ; i++) {
		printf("    ");
	}

	for(i = 1 ; i <= 31 ; i++) {
		printf("%4d", i);
		if(((start_day - 1) + i) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}