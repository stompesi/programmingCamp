#include "method.h"

/*
* �������� n������ �ٲٴ� ���α׷�
*/

void jinbub(int base, int n);

int problem_72(){
	int n, i;

	printf("������ �Է� : ");
	scanf("%d", &n);

	if(n < 0){
		printf("�߸��� �Է��Դϴ�.\n");
		exit(0);
	}
	
	for(i = 2; i < 10; i++){
		printf("%d���� : ", i);
		jinbub(i, n);
		putchar('\n');
	}
	return 0;
}

void jinbub(int base, int n){
	int i, j, jin[20];
	for(i = 0; 0 < n; i++){		// 2������
		jin[i] = n % base;
		n = n / base;
	}

	for(j = i - 1; j >= 0; j--){		//�������
		printf("%d", jin[j]);
	}
}