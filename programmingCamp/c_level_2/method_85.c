#include"method.h"
#include<conio.h>
char *G_ID = "Hansung";
char *G_PW = "computer";
int problem_85(){
	char input_id[30], input_pw[30];
	int i;
	printf("���̵� : ");
	scanf("%s", input_id);
	if(strcmp(G_ID, input_id) == 0){
		printf("��й�ȣ : ");
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
			printf("ȯ���մϴ�!\n");
		} else {
			printf("��й�ȣ�� �߸��ƽ��ϴ�.\n");
		}
	} else {
		printf("��ϵ��� ���� ���̵� �Դϴ�!\n");
	}
	return 0;
}