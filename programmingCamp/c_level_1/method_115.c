#include "method.h"

int problem_115() {
	int score;

	printf("학점 출력 프로그램\n");
	printf("점수 입력 : ");
	scanf("%d", &score);

	if(score >= 95 && score <= 100) {
		printf("학점: A+\n");
	} else if(score >= 90 && score <= 94) {
		printf("학점: A\n");
	} else if(score >= 85 && score <= 89) {
		printf("학점: B+\n");
	} else if(score >= 80 && score <= 84) {
		printf("학점: B\n");
	} else if(score >= 75 && score <= 79) {
		printf("학점: C+\n");
	} else if(score >= 70 && score <= 74) {
		printf("학점: C\n");
	} else if(score >= 65 && score <= 69) {
		printf("학점: D+\n");
	} else if(score >= 60 && score <= 64) {
		printf("학점: D\n");
	} else if(score >= 0 && score <= 59) {
		printf("학점: F\n");
	} else {
		printf("잘못 입력하였습니다.\n");
	}

	return 0;
}