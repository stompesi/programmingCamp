#include "method.h"

int problem_1() {
	int year;

	scanf("%d", &year);

	// 4�� ������ �������鼭 : year % 4 == 0
	// 100���� ������ �������� �ʴ� : year % 100 != 0
	// ���� ����
	if((year % 4 == 0) && (year % 100 != 0)) {
		printf("����\n");   
	} else {
	  printf("���\n");
	}
	return 0; 
}