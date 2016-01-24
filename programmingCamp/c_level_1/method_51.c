#include "method.h"

int problem_51() {
	int i, korea[10] = { 0 }, japan[10] = { 0 };
	int k_sum = 0, j_sum = 0;
	
	printf(">>점수 입력<<\n");
	for(i = 1 ; i < 10 ; i++) {
		printf("%d회의 korea 점수 입력 : ", i);
		scanf("%d", &korea[i]);
		k_sum += korea[i];
		printf("%d회의 japan 점수 입력 : ", i);
		scanf("%d", &japan[i]);
		j_sum += japan[i];
	}

	printf("\n>>야구 스코어<<\n\n");

	printf("회\t");
	for(i = 1 ; i < 10 ; i++) {
		printf("%d ", i);
	}
	printf("\tRun\n");
	
	printf("korea\t");
	for(i = 1 ; i < 10 ; i++) {
		printf("%d ", korea[i]);
	}
	printf("\t%2d\n", k_sum);

	printf("japan\t");
	for(i = 1 ; i < 10 ; i++) {
		printf("%d ", japan[i]);
	}
	printf("\t%2d\n", j_sum);
	
	return 0;
}