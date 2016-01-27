#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search_49(char *str[10], char* who){
	int i;
	for(i = 0 ; i < 10 ; i++){
		if(strcmp(str[i], who) == 0){
			return i;
		}
	}
	return -1;
}
int problem_49(){
	int index;
	char *name[10] = {"나태희", "유현빈", "나원빈", "문건영", "소지법", "나보배",
		"장도건", "고수영", "이나라", "김해수"};
	char *phone[10] = {"010-5228-7889", "010-5211-1472", "010-1235-8765", "010-8282-8282",
		"010-5165-3483", "010-5232-1628", "010-3452-1676", "010-5210-5463", "010-5210-1234",
		"010-8255-8255"};
	double grade[10] = {4.3, 4.0, 3.2, 2.7, 3.2, 4.0, 4.4, 3.7, 4.2, 3.8};

	char who[10];
	printf("정보를 찾고 싶은 학생의 이름은? ");
	scanf("%s", who);
	if((index = search_49(name, who)) != -1){
		printf("%s\t%s\t%.1f\n", name[index], phone[index], grade[index]);
	}else{
		printf("%s 학생을 찾을 수 없습니다.\n", who);
	}
	return 0;
}