#include "method.h"

/*
*	1~n���� Ȧ���� ���� ����Լ��� �̿��Ͽ� ���ϱ�
*/

int problem_57(){
	int n;

	printf("���� n�� �Է��ϼ���. ");
	scanf("%d", &n);

	if(n < 0){
		printf("������ ������ϴ�.\n");
		exit(0);
	}

	printf("��� : %d\n", Oddsum(n));

	return 0;
}

int Oddsum(int n){
	static int sum = 0;
	if(n == 1){
		return 1;
	}
	else {
		if(n%2 == 0){
			Oddsum(n-1);
		}
		else{
			sum = n + Oddsum(n-2);
		}
	}
	return sum;
}