#include "method.h"
#define N 10

int problem_101() {
	char name[N][N], phone[N][14];
	double grade[N];
	int max = 0;
	int i;

	printf("학생의 이름 전화번호 평점 출력 프로그램\n");

	for(i = 0 ; i < N ; i++) {
		printf("%d학생>>\n", i + 1);
		printf("이름: ");	scanf("%s", name[i]);
		printf("전화번호: "); scanf("%s", phone[i]);
		printf("평점: "); scanf("%lf", &grade[i]);
	}
	printf("===================================================\n");
	printf("    이름              전화번호         최고평점\n");
	for(i = 0 ; i < N ; i++) {
		printf("%10s\t%15s\t\t%.1lf\n", name[i], phone[i], grade[i]);
		if(grade[i]>max)
			max = i;
	}
	printf("===================================================\n");
	printf("    이름              전화번호         최고평점\n");
	printf("%10s\t%15s\t\t%.1lf\n", name[max], phone[max], grade[max]);

	return 0;
}