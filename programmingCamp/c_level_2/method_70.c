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
	printf("도서관 좌석 배치 프로그램\n");
	do{
		printf("빈자리 입니다.\n");
		show_seat();
		printf("좌석 번호를 선택하세요(1~15) : ");
		scanf("%d", &seat);
		if(seat < 1 || seat > 15){
			printf("다시 입력\n");
			continue;
		}
		if(G_SEAT[seat-1] != NULL){
			G_SEAT[seat-1] = NULL;
			opening_seat--;
		} else {
			printf("빈자리가 아닙니다.\n");
		}
	}while(opening_seat != 0);
	return 0;
}