#include "method.h"

int problem_52() {
	char social_id[7];
	char year[4] = { " " }, month[2] = { " " }, day[2] = { " " };
	int i;

	printf("번호입력 : ");
	gets(social_id);

	for( i = 0 ; i < 6; i++) {
		if(i < 2) {
			year[i] = social_id[i];
		} else if(i >= 2 && i < 4) {
			month[i-2] = social_id[i];
		} else if(i >= 4) {
			day[i - 4] = social_id[i];
		}
	}

	printf("19%d년 %d월 %d일생입니다.\n", atoi(year), atoi(month), atoi(day));

	return 0;
}