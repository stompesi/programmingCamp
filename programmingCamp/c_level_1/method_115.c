#include "method.h"

int problem_115() {
	int score;

	printf("���� ��� ���α׷�\n");
	printf("���� �Է� : ");
	scanf("%d", &score);

	if(score >= 95 && score <= 100) {
		printf("����: A+\n");
	} else if(score >= 90 && score <= 94) {
		printf("����: A\n");
	} else if(score >= 85 && score <= 89) {
		printf("����: B+\n");
	} else if(score >= 80 && score <= 84) {
		printf("����: B\n");
	} else if(score >= 75 && score <= 79) {
		printf("����: C+\n");
	} else if(score >= 70 && score <= 74) {
		printf("����: C\n");
	} else if(score >= 65 && score <= 69) {
		printf("����: D+\n");
	} else if(score >= 60 && score <= 64) {
		printf("����: D\n");
	} else if(score >= 0 && score <= 59) {
		printf("����: F\n");
	} else {
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}

	return 0;
}