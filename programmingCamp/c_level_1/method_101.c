#include "method.h"
#define N 10

int problem_101() {
	char name[N][N], phone[N][14];
	double grade[N];
	int max = 0;
	int i;

	printf("�л��� �̸� ��ȭ��ȣ ���� ��� ���α׷�\n");

	for(i = 0 ; i < N ; i++) {
		printf("%d�л�>>\n", i + 1);
		printf("�̸�: ");	scanf("%s", name[i]);
		printf("��ȭ��ȣ: "); scanf("%s", phone[i]);
		printf("����: "); scanf("%lf", &grade[i]);
	}
	printf("===================================================\n");
	printf("    �̸�              ��ȭ��ȣ         �ְ�����\n");
	for(i = 0 ; i < N ; i++) {
		printf("%10s\t%15s\t\t%.1lf\n", name[i], phone[i], grade[i]);
		if(grade[i]>max)
			max = i;
	}
	printf("===================================================\n");
	printf("    �̸�              ��ȭ��ȣ         �ְ�����\n");
	printf("%10s\t%15s\t\t%.1lf\n", name[max], phone[max], grade[max]);

	return 0;
}