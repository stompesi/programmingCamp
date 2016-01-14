#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// ���� �� �� ���� �� ��� ����.
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
	printf("�÷��̾� %d - %s\n", *play_order + 1, player_name);
	printf("�� >> ");
	scanf("%d", &row);
	printf("�� >> ");
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
	printf("<< ƽ���� ����>> \n");
	printf("�÷��̾� 1 �̸� �Է� >> ");
	scanf("%s", player_name[PLAYER_1]);
	printf("�÷��̾� 2 �̸� �Է� >> ");
	scanf("%s", player_name[PLAYER_2]);

	if(set_play_order() == 0){
		printf("�÷��̾� 1 - %s ���� �����մϴ�.\n", player_name[PLAYER_1]);
		play_order = PLAYER_1;
	} else {
		printf("�÷��̾� 2 - %s ���� �����մϴ�.\n", player_name[PLAYER_2]);
		play_order = PLAYER_2;
	}
	do{
		if(available_game() == 0){
			printf("������ ���º�\n");
			return;
		}
		input_locate(&play_order, player_name[play_order]);
		show_board();
	}while((winner = is_finished()) == -1);

	printf("�÷��̾� %d - %s �¸�\n", winner + 1 ,player_name[winner]);
}