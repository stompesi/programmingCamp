#include "method.h"

int problem_39() {
	int year;
	
	printf("�¾ ������ �Է��ϸ� �츦 ����ϴ� ���α׷�\n");

	printf("�¾ �⵵��? ");
	scanf("%d", &year);

	year = (year - 1900) % 12;

	switch (year) {
	case 0: printf(">> ���\n"); break;
	case 1: printf(">> �Ҷ�\n"); break;
	case 2: printf(">> ȣ���̶�\n"); break;
	case 3: printf(">> �䳢��\n"); break;
	case 4: printf(">> ���\n"); break;
	case 5: printf(">> ���\n"); break;
	case 6: printf(">>����\n"); break;
	case 7: printf(">>���\n"); break;
	case 8: printf(">>�����̶�\n"); break;
	case 9: printf(">>�߶�\n"); break;
	case 10: printf(">>����\n"); break;
	case 11: printf(">>������\n"); break;
	default:
		break;
	}
	return 0;
}