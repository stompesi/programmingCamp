#include"method.h"
#include<stdio.h>
#include<string.h>
#define MAX_BUF 64
int G_PERSON;
int G_LIM_NUM;
char G_STR[MAX_BUF];
char* clap(int number){
	int count = 0, i;
	itoa(number, G_STR, 10);
	for(i  = 0 ; i < strlen(G_STR) ; i++){
		if(G_STR[i] == '3' || G_STR[i] == '6' || G_STR[i] == '9'){
			count++;
		}
	}
	if(count != 0){
		strcpy(G_STR, "");
		for(i = 0 ; i < count ; i++){
			strcat(G_STR, "(박수)");
		}
	}
	return G_STR;
}
int problem_91(){
	int i, person =0;
	printf("3, 6, 9 게임 입니다.\n");
	printf("사람수를 입력 : ");
	scanf("%d", &G_PERSON);
	printf("끝나는 수를 입력 : ");
	scanf("%d", &G_LIM_NUM);
	for(i = 1 ; i <= G_LIM_NUM ; i++, person++){
		printf("<%d번 : %d> : %s\n",(person%G_PERSON) + 1 , i, clap(i));
	}

	return 0;
}