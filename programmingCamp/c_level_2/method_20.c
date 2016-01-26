#include "method.h"

int problem_20() {
	char commodity[5][128] = { "hard disk", "CPU(intel)", "main board", "LCD monitor", "DVD-RW(combo)" };
	int unit_cost[5] = { 135000, 235000, 122000, 260000, 73500 };
	int quantity[5];
	int sum[5];
	int total = 0;
	int i;
	FILE *file;

	printf("20. 물품들의 판매현황을 텍스트 파일에 출력하는 프로그램.\n");

	printf("각 물품의 수량을 입력하세요.\n");

	for(i = 0; i < 5; i++) {
		printf("%s : ", commodity[i]);
		scanf("%d", &quantity[i]);
		sum[i] = unit_cost[i] * quantity[i];
		total += sum[i];
	}
	
	printf("\n물품판매현황\n\n");
	printf("물품\t\t단가\t수량\t금액\n");
	for(i = 0; i < 5; i++) {
		printf("%s\t%6d\t%3d\t%7d 원\n", commodity[i], unit_cost[i], quantity[i], sum[i]);
	}
	printf("\n 총계\t\t\t\t%d 원\n", total);

	
	file = fopen("sale.txt", "w");

	fprintf(file, "\n물품판매현황\n\n");
	fprintf(file, "물품\t\t단가\t수량\t금액\n");
	for(i = 0; i < 5; i++) {
		fprintf(file, "%s\t%6d\t%3d\t%7d 원\n", commodity[i], unit_cost[i], quantity[i], sum[i]);
	}
	fprintf(file, "\n 총계\t\t\t\t%d 원\n", total);

	fclose(file);

	return 0;
}