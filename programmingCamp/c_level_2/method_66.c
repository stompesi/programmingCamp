#include "method.h"

/*
*	������� ���ڿ� ���
*/

int problem_66(){
	char i, j;
	int n = 0;
/*
	for(i = 'A'; i <= 'Z'; i++){	// ù��° ���
		for(j = 'A'; j <= i; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z'; i++){	// �ι�° ���
		for(j = i; j <= 'Z'; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z'; i++){	// ����° ���
		for(j = i; j <= 'Z'; j++){
			printf(" ");
		}
		for(j = 'A'; j <= i; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z' - ('Z'-'A')/2; i++){	// �׹�° ���
		int count = 0;
		for(j = 'A'; j <= i; j++){	// ���� ���� ���
			printf("%c", j);
		}
		for(j = ('A' + n); j <= ('Z' - n); j++){
			printf(" ");
			count++;
		}
		for(j = i + count - 1; j <= 'Z'; j++){	// ī��Ʈ�� �������� �ѹ��� �����ϴ� ���ش�
			printf("%c", j);					// ���� ���� ���
		}
		n++;
		putchar('\n');
	}
*/
	return 0;
}