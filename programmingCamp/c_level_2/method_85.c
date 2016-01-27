#include"method.h"
#include<conio.h>
char *G_ID = "Hansung";
char *G_PW = "computer";
int problem_85(){
	char input_id[30], input_pw[30];
	int i;
	printf("아이디 : ");
	scanf("%s", input_id);
	if(strcmp(G_ID, input_id) == 0){
		printf("비밀번호 : ");
		for(i = 0 ; ; i++){
			input_pw[i] = getch();
			if(input_pw[i] == '\r'){
				input_pw[i] = NULL;
				break;
			}
			putchar('*');
		}
		printf("\n");
		if(strcmp(G_PW, input_pw) == 0){
			printf("환영합니다!\n");
		} else {
			printf("비밀번호가 잘못됐습니다.\n");
		}
	} else {
		printf("등록되지 않은 아이디 입니다!\n");
	}
	return 0;
}