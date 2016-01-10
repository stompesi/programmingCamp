#include "method.h"

int problem_20() {
	char commodity[5][128] = { "hard disk", "CPU(intel)", "main board", "LCD monitor", "DVD-RW(combo)" };
	int unit_cost[5] = { 135000, 235000, 122000, 260000, 73500 };
	int quantity[5];
	int sum[5];
	int total = 0;
	int i;
	FILE *file;

	printf("20. ��ǰ���� �Ǹ���Ȳ�� �ؽ�Ʈ ���Ͽ� ����ϴ� ���α׷�.\n");

	printf("�� ��ǰ�� ������ �Է��ϼ���.\n");

	for(i = 0; i < 5; i++) {
		printf("%s : ", commodity[i]);
		scanf("%d", &quantity[i]);
		sum[i] = unit_cost[i] * quantity[i];
		total += sum[i];
	}
	
	printf("\n��ǰ�Ǹ���Ȳ\n\n");
	printf("��ǰ\t\t�ܰ�\t����\t�ݾ�\n");
	for(i = 0; i < 5; i++) {
		printf("%s\t%6d\t%3d\t%7d ��\n", commodity[i], unit_cost[i], quantity[i], sum[i]);
	}
	printf("\n �Ѱ�\t\t\t\t%d ��\n", total);

	
	file = fopen("sale.txt", "w");

	fprintf(file, "\n��ǰ�Ǹ���Ȳ\n\n");
	fprintf(file, "��ǰ\t\t�ܰ�\t����\t�ݾ�\n");
	for(i = 0; i < 5; i++) {
		fprintf(file, "%s\t%6d\t%3d\t%7d ��\n", commodity[i], unit_cost[i], quantity[i], sum[i]);
	}
	fprintf(file, "\n �Ѱ�\t\t\t\t%d ��\n", total);

	fclose(file);

	return 0;
}