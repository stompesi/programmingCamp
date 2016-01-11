#include"method.h"
#include<stdio.h>
#define HEXA 16
void show_char(int value){
	if(value < 10){
		printf("%d", value);
	}
	else{
		switch(value){
		case 10:
			printf("a");
			break;
		case 11:
			printf("b");
			break;
		case 12:
			printf("c");
			break;
		case 13:
			printf("d");
			break;
		case 14:
			printf("e");
			break;
		case 15:
			printf("f");
			break;
		}
	}
}
void hexa(int value){
	int remainder, quota;
	quota = value / HEXA;
	remainder = value % HEXA;
	if(quota == 1){
		show_char(quota);
		show_char(remainder);
		return;
	} else if(quota == 0){
		show_char(remainder);
		return ;
	}
	hexa(quota);
	show_char(remainder);
	
}
void problem_34(){
	int input;
	printf("10진수 -> 16진수\n");
	printf(">> ");
	scanf("%d", &input);
	hexa(input);
}