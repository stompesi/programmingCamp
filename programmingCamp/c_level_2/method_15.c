#include "method.h"

int leng(char* p);
void pal(char* p, int len);

/*
*	ȸ�� �Ǻ�
*/

int problem_15(){
	char str[100];
	int length;

	printf("���ڿ� �Է�>> ");
	scanf("%s", str);

	length = strlen(str);

	pal(str, length);

	return 0;
}

int leng(char* p){		//���ڿ� ���� ���ϴ� �Լ�
	int l = 0;

	while(p[l] != '\0')		//���ڿ������� �ݺ�
		l++;

	return l;
}

void pal(char* p, int len){
	int i, count = 0;

	for(i = 0; i < len/2; i += 2){
		if(p[i] != p[len-i-2] || p[i+1] != p[len-i-1]){
			printf("ȸ���� �ƴմϴ�.\n");
			exit(0);
		}
	}
	printf("ȸ���Դϴ�.\n");
}