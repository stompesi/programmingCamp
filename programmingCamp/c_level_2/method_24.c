#include "method.h"

/*
* �������� �������� �ٲٴ� ���α׷�
*/

int problem_24(){
	int i, j, n, binary[20];

	printf("�������� �Է��ϼ���. ");
	scanf("%d", &n);

	if(n < 0){
		printf("�߸��� �Է��Դϴ�.\n");
		exit(0);
	}

	for(i = 0; 0 < n; i++){		// 2������
		binary[i] = n % 2;
		n = n / 2;
	}

	for(j = i - 1; j >= 0; j--){		//�������� ���
		printf("% d", binary[j]);
	}
	putchar('\n');

	return 0;
}