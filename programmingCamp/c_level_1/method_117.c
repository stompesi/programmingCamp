#include "method.h"

int problem_117() {
	char day[7][3] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	int start_day;
	int i;

	printf("���� ���� �Է� (�Ͽ���:1 ~ �����:7) : ");
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