#include "method.h"

int problem_71() {
	int sec;
	int hour = 0, minute = 0;

	printf("초를 입력하면 시,분,초로 나타내는 프로그램\n");
	printf("초를 입력하세요 : ");
	scanf("%d", &sec);

	hour = sec / 3600;
	minute = (sec - (3600 * hour)) / 60;
	sec = sec % 60;

	printf("결과 : %d시 %d분 %d초\n", hour, minute, sec);

	return 0;
}