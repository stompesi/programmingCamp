#include"method.h"
#define MAX_BUF 64
int problem_88(){
	char input_str[MAX_BUF], sub_str[MAX_BUF], front_str[MAX_BUF] = "", back_str[MAX_BUF] = "";
	int length;
	char *p_start;
	printf("문자열 입력 : ");
	gets(input_str);

	do{
		printf("현재 문자열 : %s\n", input_str);
		printf("뺄 문자열 : ");
		gets(sub_str);
		p_start = strstr(input_str, sub_str);
		if(p_start != NULL){
			length = strlen(sub_str);
			strcpy(back_str, (p_start+length));
			*p_start = '\0';
			strcat(input_str, back_str);
		} else {
			printf("같은 문자열 없음\n");
		}
	}while(strcmp(input_str, "") != 0);
	return 0;
}