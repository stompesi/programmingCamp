#include"method.h"
#define MAX_BUF 64
//#define MAX_LINE 20
int problem_82(){
	char input_string[MAX_BUF];
	int i, count = 1;
	printf("���� : ");
	gets(input_string);
	printf("���ڼ� : %d ", strlen(input_string));
	for(i = 0 ; input_string[i] != NULL ; i++){
		if(input_string[i] == ' '){
			count++;
		}
	}
	printf(" �ܾ�� : %d\n", count);
	return 0;
}