#include"method.h"
#include<stdio.h>

float get_result(int money, float rate, int month){
	float result;
	float month_interest_rate = rate/12.;
	float temp = 1;
	int i = 0;
	for(i = 0 ; i < month; i++){
		temp *= (1 + month_interest_rate);
	}
	result = money * (1 + month_interest_rate) * (temp - 1) / month_interest_rate;
	return result;
}
int problem_37(){
	int init_money, month;
	float annual_interest_rate;
	float result;
	printf("<< ���� �հ� >>\n");
	printf("���̾� >> ");
	scanf("%d", &init_money);
	printf("������ >> ");
	scanf("%f", &annual_interest_rate);
	printf("���� ������ >> ");
	scanf("%d", &month);

	result = get_result(init_money, annual_interest_rate, month);
	printf("�����հ�� %f �Դϴ�.\n", result);

	return 0;
}