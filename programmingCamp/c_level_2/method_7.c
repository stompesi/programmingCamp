#include"method.h"
#include<stdio.h>
void display_calendar(int year, int month, int day){
	int day_count, i;
	if(month == 2){
		if((year % 4 == 0) && (year % 100 != 0)){
			day_count = 29;
		} else{
			day_count = 28;
		}
	} else if( month == 4 && month == 6 && month == 9 && month == 11){
		day_count = 30;
	} else{
		day_count = 31;
	}
	printf("\t��\t��\tȭ\t��\t��\t��\t��\n");
	for(i = 0 ; i < day ; i++){
		printf("\t");
	}
	for(i = 0 ; i < day_count ; i++){
		printf("%d\t", i+1);
		if(++day == 8){
			day = 1;
			printf("\n\t");
		}
	}
	printf("\n");
}
int problem_7(){
	int year, month, day;
	printf("�⵵ >> ");
	scanf("%d", &year);
	printf("�� >> ");
	scanf("%d", &month);
	printf("���� >> ");
	scanf("%d", &day);

	display_calendar(year, month, day);
	
	return 0;
}