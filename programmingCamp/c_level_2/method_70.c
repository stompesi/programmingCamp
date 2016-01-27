#include"method.h"
#include<stdio.h>
char G_SEAT[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
void show_seat(){
	int i;
	for(i = 1 ; i <= 15 ; i++){
		if(G_SEAT[i-1] != NULL){
			printf("%3d", G_SEAT[i-1]);
		} else {
			printf("   ");
		}
		if(i % 5 == 0){
			printf("\n");
		}
	}
}
int problem_70(){
	int i, seat, opening_seat = 15;
	printf("������ �¼� ��ġ ���α׷�\n");
	do{
		printf("���ڸ� �Դϴ�.\n");
		show_seat();
		printf("�¼� ��ȣ�� �����ϼ���(1~15) : ");
		scanf("%d", &seat);
		if(seat < 1 || seat > 15){
			printf("�ٽ� �Է�\n");
			continue;
		}
		if(G_SEAT[seat-1] != NULL){
			G_SEAT[seat-1] = NULL;
			opening_seat--;
		} else {
			printf("���ڸ��� �ƴմϴ�.\n");
		}
	}while(opening_seat != 0);
	return 0;
}