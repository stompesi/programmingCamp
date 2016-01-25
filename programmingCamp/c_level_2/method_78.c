#include "method.h"

/*
*	��ǻ�Ϳ� ���������� �����ϱ�
*/
char arr[3][7] = {"����", "����", "��"};

int problem_78(){
	int com, player, i = 1, win = 0, lose = 0, tie = 0, result;
		
	srand(time(NULL));
	
	printf("����, ����, �� �����Դϴ�. ���Ḧ ���Ͻø� 0�� �Է��ϼ���.\n");
	while(1){
		com = rand() % 3 + 1;	//1~3 ���� ����
		while(1){
			printf("%d���� ���� : %d(%s), %d(%s), %d(%s), 0(����) : ", i, 1, arr[0], 2, arr[1], 3, arr[2]);
			scanf("%d", &player);
			
			if(player < 0 || player > 3){
				printf("�߸��� �Է��Դϴ�.\n");
				continue;
			}
			else{
				break;
			}
		}

		if(player == 0){
			printf("������ �����մϴ�.\n");
			printf("���Ӽ� %d�� %d��, %d��, %d���Դϴ�.\n", i, win, lose, tie);
			break;
		}

		result = play(com, player);

		if(result == 0) {
			printf("== �����ϴ� ==\n");
			tie++;
		} else if(result == 1) {
			printf("^.^ �̰���ϴ�\n");
			win++;
		} else if(result == -1) {
			printf("��.�� �����ϴ�!\n");
			lose++;
		}
		i++;
	}

	return 0;
}
int play(int com, int player){
	printf("��ǻ�ʹ� %d(%s) �Դϴ�. ", com, arr[com-1]);
	if(com == 1){
		if(player == 1){
			return 0;
		}
		else if(player == 2){
			return 1;
		}
		else if(player == 3){
			return -1;
		}
	}
	else if(com == 2){
		if(player == 1){
			return -1;
		}
		else if(player == 2){
			return 0;
		}
		else if(player == 3){
			return 1;
		}
	}
	else if(com == 3){
		if(player == 1){
			return 1;
		}
		else if(player == 2){
			return -1;
		}
		else if(player == 3){
			return 0;
		}
	}
}