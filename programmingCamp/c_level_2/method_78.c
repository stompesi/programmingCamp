#include "method.h"

/*
*	컴퓨터와 가위바위보 게임하기
*/
char arr[3][7] = {"가위", "바위", "보"};

int problem_78(){
	int com, player, i = 1, win = 0, lose = 0, tie = 0, result;
		
	srand(time(NULL));
	
	printf("가위, 바위, 보 게임입니다. 종료를 원하시면 0을 입력하세요.\n");
	while(1){
		com = rand() % 3 + 1;	//1~3 범위 설정
		while(1){
			printf("%d번쨰 게임 : %d(%s), %d(%s), %d(%s), 0(종료) : ", i, 1, arr[0], 2, arr[1], 3, arr[2]);
			scanf("%d", &player);
			
			if(player < 0 || player > 3){
				printf("잘못된 입력입니다.\n");
				continue;
			}
			else{
				break;
			}
		}

		if(player == 0){
			printf("게임을 종료합니다.\n");
			printf("게임수 %d전 %d승, %d패, %d무입니다.\n", i, win, lose, tie);
			break;
		}

		result = play(com, player);

		if(result == 0) {
			printf("== 비겼습니다 ==\n");
			tie++;
		} else if(result == 1) {
			printf("^.^ 이겼습니다\n");
			win++;
		} else if(result == -1) {
			printf("ㅜ.ㅜ 졌습니다!\n");
			lose++;
		}
		i++;
	}

	return 0;
}
int play(int com, int player){
	printf("컴퓨터는 %d(%s) 입니다. ", com, arr[com-1]);
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