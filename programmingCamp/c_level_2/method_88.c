#include"method.h"
#define MAX_BUF 64
int problem_88(){
	char input_str[MAX_BUF], sub_str[MAX_BUF], front_str[MAX_BUF] = "", back_str[MAX_BUF] = "";
	int length;
	char *p_start;
	printf("���ڿ� �Է� : ");
	gets(input_str);

	do{
		printf("���� ���ڿ� : %s\n", input_str);
		printf("�� ���ڿ� : ");
		gets(sub_str);
		p_start = strstr(input_str, sub_str);
		if(p_start != NULL){
			length = strlen(sub_str);
			strcpy(back_str, (p_start+length));
			*p_start = '\0';
			strcat(input_str, back_str);
		} else {
			printf("���� ���ڿ� ����\n");
		}
	}while(strcmp(input_str, "") != 0);
	return 0;
}