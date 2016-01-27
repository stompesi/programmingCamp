#include"method.h"
#include<stdio.h>
int g_sign_value = 0;
void print_comma(int n){
	int temp, remainder;
	if( n < 0){
		n *= -1;
		g_sign_value = 1;
	}
	if(n >= 1000){
		temp = n / 1000;
		print_comma(temp);
		remainder = n % 1000;
		if(remainder / 100 < 1){
			if(remainder / 10 < 1){
				printf(",00%d", remainder);
			} else {
				printf(",0%d", remainder);
			}
		} else if(remainder == 0){
			printf(",000");
		} else {
			printf(",%d", remainder);
		}
	} else {
		if(g_sign_value == 1){
			printf("-%d", n);
		} else{
			printf("%d", n);
		}

	}
}

int problem_73(){
	int input;
	printf("정수 입력 : ");
	scanf("%d", &input);
	print_comma(input);
	return 0;
}