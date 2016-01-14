#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// 놨던 곳 또 놨을 때 고려 안함.
#define MAX_BUF 512
typedef enum Player{
	PLAYER_1,
	PLAYER_2
};

char TTT_BOARD[3][3] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ', ' '}};
void show_board(){
	printf("     1   2    3\n");
	printf("   +---+---+---+\n");
	printf(" A l %c l %c l %c l\n", TTT_BOARD[0][0], TTT_BOARD[0][1], TTT_BOARD[0][2]);
	printf("   +---+---+---+\n");
	printf(" B l %c l %c l %c l\n", TTT_BOARD[1][0], TTT_BOARD[1][1], TTT_BOARD[1][2]);
	printf("   +---+---+---+\n");
	printf(" C l %c l %c l %c l\n", TTT_BOARD[2][0], TTT_BOARD[2][1], TTT_BOARD[2][2]);
	printf("   +---+---+---+\n");

}
int set_play_order(){
	int order;
	srand(time(NULL));
	order = rand() %2;
	return order;
}
void input_locate(int* play_order, char* player_name){
	int row, col;
	printf("플레이어 %d - %s\n", *play_order + 1, player_name);
	printf("행 >> ");
	scanf("%d", &row);
	printf("열 >> ");
	scanf("%d", &col);

	if( *play_order == PLAYER_1){
		TTT_BOARD[row - 1][col - 1] = 'O';
		*play_order = PLAYER_2;
	} else{
		TTT_BOARD[row - 1][col - 1] = 'X';
		*play_order = PLAYER_1;
	}
}
int is_finished(){
	int i, winner = -1;

	if(TTT_BOARD[0][0] == TTT_BOARD[1][1] && TTT_BOARD[0][0] == TTT_BOARD[2][2] && (TTT_BOARD[0][0] == 'O' || TTT_BOARD[0][0] == 'X')){
		winner = TTT_BOARD[1][1] == 'O'? PLAYER_1:PLAYER_2;
	} else if(TTT_BOARD[2][0] == TTT_BOARD[1][1] && TTT_BOARD[2][0] == TTT_BOARD[0][2]&& (TTT_BOARD[2][0] == 'O' || TTT_BOARD[2][0] == 'X')){
		winner = TTT_BOARD[1][1] == 'O' ? PLAYER_1 : PLAYER_2;
	} else{
		for(i = 0 ; i < 3 ; i++){
			if(TTT_BOARD[0][i] == TTT_BOARD[1][i] && TTT_BOARD[0][i] == TTT_BOARD[2][i] && (TTT_BOARD[0][i] == 'O' || TTT_BOARD[0][i] == 'X')){
				winner = TTT_BOARD[1][i] == 'O' ? PLAYER_1 : PLAYER_2;
				break;
			} else if(TTT_BOARD[i][0] == TTT_BOARD[i][1] && TTT_BOARD[i][0] == TTT_BOARD[i][2] && (TTT_BOARD[i][0] == 'O' || TTT_BOARD[i][0] == 'X')){
				winner = TTT_BOARD[i][1] == 'O' ? PLAYER_1 : PLAYER_2;
				break;
			}
		}
	}
	return winner;
}
int available_game(){
	int i, j;
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++){
			if(TTT_BOARD[i][j] == ' '){
				return 1;
			}
		}
	}
	return 0;
}
void problem_40(){
	int play_order;
	char player_name[2][MAX_BUF];
	int winner;
	srand(time(NULL));
	printf("<< 틱택토 게임>> \n");
	printf("플레이어 1 이름 입력 >> ");
	scanf("%s", player_name[PLAYER_1]);
	printf("플레이어 2 이름 입력 >> ");
	scanf("%s", player_name[PLAYER_2]);

	if(set_play_order() == 0){
		printf("플레이어 1 - %s 먼저 시작합니다.\n", player_name[PLAYER_1]);
		play_order = PLAYER_1;
	} else {
		printf("플레이어 2 - %s 먼저 시작합니다.\n", player_name[PLAYER_2]);
		play_order = PLAYER_2;
	}
	do{
		if(available_game() == 0){
			printf("게임은 무승부\n");
			return;
		}
		input_locate(&play_order, player_name[play_order]);
		show_board();
	}while((winner = is_finished()) == -1);

	printf("플레이어 %d - %s 승리\n", winner + 1 ,player_name[winner]);
}