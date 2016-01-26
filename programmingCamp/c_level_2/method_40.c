#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 놨던 곳 또 놨을 때 고려 안함.
#define MAX_BUF 512
typedef enum Player_40{
	Player_40_1,
	Player_40_2
};

char TTT_BOARD_40[3][3] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ', ' '}};
void show_board_40(){
	printf("     1   2    3\n");
	printf("   +---+---+---+\n");
	printf(" A l %c l %c l %c l\n", TTT_BOARD_40[0][0], TTT_BOARD_40[0][1], TTT_BOARD_40[0][2]);
	printf("   +---+---+---+\n");
	printf(" B l %c l %c l %c l\n", TTT_BOARD_40[1][0], TTT_BOARD_40[1][1], TTT_BOARD_40[1][2]);
	printf("   +---+---+---+\n");
	printf(" C l %c l %c l %c l\n", TTT_BOARD_40[2][0], TTT_BOARD_40[2][1], TTT_BOARD_40[2][2]);
	printf("   +---+---+---+\n");

}
int set_play_order_40(){
	int order;
	srand(time(NULL));
	order = rand() %2;
	return order;
}
void input_locate_40(int* play_order, char* Player_40_name){
	int row, col;
	printf("플레이어 %d - %s\n", *play_order + 1, Player_40_name);
	printf("행 >> ");
	scanf("%d", &row);
	printf("열 >> ");
	scanf("%d", &col);

	if( *play_order == Player_40_1){
		TTT_BOARD_40[row - 1][col - 1] = 'O';
		*play_order = Player_40_2;
	} else{
		TTT_BOARD_40[row - 1][col - 1] = 'X';
		*play_order = Player_40_1;
	}
}
int is_finished_40(){
	int i, winner = -1;

	if(TTT_BOARD_40[0][0] == TTT_BOARD_40[1][1] && TTT_BOARD_40[0][0] == TTT_BOARD_40[2][2] && (TTT_BOARD_40[0][0] == 'O' || TTT_BOARD_40[0][0] == 'X')){
		winner = TTT_BOARD_40[1][1] == 'O'? Player_40_1:Player_40_2;
	} else if(TTT_BOARD_40[2][0] == TTT_BOARD_40[1][1] && TTT_BOARD_40[2][0] == TTT_BOARD_40[0][2]&& (TTT_BOARD_40[2][0] == 'O' || TTT_BOARD_40[2][0] == 'X')){
		winner = TTT_BOARD_40[1][1] == 'O' ? Player_40_1 : Player_40_2;
	} else{
		for(i = 0 ; i < 3 ; i++){
			if(TTT_BOARD_40[0][i] == TTT_BOARD_40[1][i] && TTT_BOARD_40[0][i] == TTT_BOARD_40[2][i] && (TTT_BOARD_40[0][i] == 'O' || TTT_BOARD_40[0][i] == 'X')){
				winner = TTT_BOARD_40[1][i] == 'O' ? Player_40_1 : Player_40_2;
				break;
			} else if(TTT_BOARD_40[i][0] == TTT_BOARD_40[i][1] && TTT_BOARD_40[i][0] == TTT_BOARD_40[i][2] && (TTT_BOARD_40[i][0] == 'O' || TTT_BOARD_40[i][0] == 'X')){
				winner = TTT_BOARD_40[i][1] == 'O' ? Player_40_1 : Player_40_2;
				break;
			}
		}
	}
	return winner;
}
int available_game_40(){
	int i, j;
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++){
			if(TTT_BOARD_40[i][j] == ' '){
				return 1;
			}
		}
	}
	return 0;
}
int problem_40(){
	int play_order;
	char Player_40_name[2][MAX_BUF];
	int winner;
	srand(time(NULL));
	printf("<< 틱택토 게임>> \n");
	printf("플레이어 1 이름 입력 >> ");
	scanf("%s", Player_40_name[Player_40_1]);
	printf("플레이어 2 이름 입력 >> ");
	scanf("%s", Player_40_name[Player_40_2]);

	if(set_play_order_40() == 0){
		printf("플레이어 1 - %s 먼저 시작합니다.\n", Player_40_name[Player_40_1]);
		play_order = Player_40_1;
	} else {
		printf("플레이어 2 - %s 먼저 시작합니다.\n", Player_40_name[Player_40_2]);
		play_order = Player_40_2;
	}
	do{
		if(available_game_40() == 0){
			printf("게임은 무승부\n");
			return;
		}
		input_locate_40(&play_order, Player_40_name[play_order]);
		show_board_40();
	}while((winner = is_finished_40()) == -1);

	printf("플레이어 %d - %s 승리\n", winner + 1 ,Player_40_name[winner]);

	return 0;
}