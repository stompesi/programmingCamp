#include "method.h"

/*
*	���ڸ� �Է¹޾� �ƽ�Ű�ڵ尪�� 10����, 8����,
*	16����, 2������ ���
*/

int problem_60(){
	char c;
	int n, i, j, bi[8];

	printf("���� �Է� : ");
	scanf("%c", &c);

	n = (unsigned int)c;
	
	for(i = 0; 0 < n; i++){		// 2������
		bi[i] = n % 2;
		n = n / 2;
	}

	printf("������ : %d  8���� : %o  16���� : %x  2���� : ", c, c, c);
	for(j = i - 1; j >= 0; j--){		//�������
		printf("%d", bi[j]);
	}
	putchar('\n');
	
	return 0;
}