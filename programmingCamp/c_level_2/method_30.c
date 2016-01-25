#include "method.h"

/*
*	������ ���ڿ��� ��ȯ�� ���
*/
void tran(int i);

int problem_30(){
	int n, a, b, c, d;

	fflush(stdin);
	printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. ->");
	scanf("%d", &n);

	if(n >= 10000 || n < 0){
		printf("������ �ʰ��Ͽ����ϴ�.\n");
		exit(0);
	}

	a = n / 1000;
	b = n / 100 - (a * 10);
	c = n / 10 - (a * 100 + b * 10);
	d = n % 10;

	if(a > 0){
		tran(a);
		printf("õ ");
	}
	if(b > 0){
		tran(b);
		printf("�� ");
	}
	if(c > 0){
		tran(c);
		printf("�� ");
	}
	if(d > 0){
		tran(d);
	}
	printf("\n");

	return 0;
}

void tran(int i){
	switch(i){
		case 1: printf("��"); break;
		case 2: printf("��"); break;
		case 3: printf("��"); break;
		case 4: printf("��"); break;
		case 5: printf("��"); break;
		case 6: printf("��"); break;
		case 7: printf("ĥ"); break;
		case 8: printf("��"); break;
		case 9: printf("��"); break;
	}
}