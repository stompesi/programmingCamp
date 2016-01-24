#include "method.h"

int problem_118() {
	char day[7][3] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	int start_day, count = 0;
	int i;

	printf("���� ���� �Է� (�Ͽ���:0 ~ �����:6) : ");
	scanf("%d", &start_day);

	//1��
	printf("\n=============1��=============\n");
	for(i = 0 ; i < 7 ; i++) {
		printf("  %s", day[i]);
	}
	printf("\n");

	for(i = 1 ; i <= start_day ; i++) {
		printf("    ");
	}

	for(i = 1 ; i <= 31 ; i++) {
		printf("%4d", i);
		count++;
		if(((start_day)+i) % 7 == 0) {
			printf("\n");
			count = 0;
		}
	}
	printf("\n");

	printf("\n=============2��=============\n");
	for(i = 0 ; i < 7 ; i++) {
		printf("  %s", day[i]);
	}
	printf("\n");

	for(i = 1 ; i <= count ; i++) {
		printf("    ");
	}

	for(i = 1 ; i <= 28 ; i++) {
		printf("%4d", i);
		if(((count)+i) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	printf("=============================\n");

	return 0;
}