#include "method.h"

/*
*	��ø�� �ݺ����� �̿���
*	012345�� �ϳ��� �������� ��ȯ�Ͽ� ���
*/
int problem_18(){
	int i, j, n;

	for(i = 0; i < 6; i++){
		for(j = 0; j < i; j++){
			putchar(' ');
		}
		for(j = i; j < 6; j++){
			printf("%d", j);
		}
		putchar('\n');
	}

	return 0;
}