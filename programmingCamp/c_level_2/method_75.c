#include "method.h"

/*
*	��Ģ������ �������� ������ ���� ���������� �ݺ��ϰų�
*	99�� �Էµɶ����� �ݺ��ϴ� ���α׷�
*/

int problem_75(){
	int p1, p2, result, ans, ran_op;
	char op;

	srand(time(NULL));
	
	printf("����� 99�� �Է��ϼ���.\n");
	while(1){
		p1 = rand() % 8 + 2;	// 2~9 ���� ����
		p2 = rand() % 8 + 2;	// 2~9 ���� ����
		ran_op = rand() % 4;	// ���� 4���� �ϳ� ����

		switch(ran_op){
			case 0: op = '+'; result = p1 + p2; break;
			case 1: op = '-'; result = p1 - p2; break;
			case 2: op = '*'; result = p1 * p2; break;
			case 3: op = '/'; result = p1 / p2; break;
		}
		if(result < 0){		// ����� �����̸� �ٽ� ó������
			continue;
		}
		while(1){
			printf("%d %c %d = ? ", p1, op, p2);
			scanf("%d", &ans);
			if(ans == 99){
				break;
			}

			if(ans == result){
				printf("�¾ҽ��ϴ�.!\n");
				break;
			}
			else{
				printf("Ʋ�Ƚ��ϴ�.\n");
			}
		}
		
		if(ans == 99){
				break;
		}
	}

	return 0;
}