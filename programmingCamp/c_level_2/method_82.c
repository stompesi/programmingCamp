#include"method.h"
#define MAX_BUF 64
//#define MAX_LINE 20
int problem_82(){
	char input_string[MAX_BUF];
	int i, count = 1;
	printf("문장 : ");
	gets(input_string);
	printf("문자수 : %d ", strlen(input_string));
	for(i = 0 ; input_string[i] != NULL ; i++){
		if(input_string[i] == ' '){
			count++;
		}
	}
	printf(" 단어수 : %d\n", count);
	return 0;
}