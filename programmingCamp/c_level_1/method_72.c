#include "method.h"

int problem_72() {
	int hour, min, sec;

	printf("시, 분, 초를 입력받아 초로 계산하는 프로그램\n");

	printf("시간을 입력 : ");
	scanf("%d시간 %d분 %d초", &hour, &min, &sec);

	sec += (hour* 3600);
	sec += (min * 60);

	printf("결과 : %d초 \n", sec);

	return 0;
}