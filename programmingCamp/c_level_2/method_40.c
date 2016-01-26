#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// ���� �� �� ���� �� ��� ����.
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
	printf("�÷��̾� %d - %s\n", *play_order + 1, Player_40_name);
	printf("�� >> ");
	scanf("%d", &row);
	printf("�� >> ");
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
	printf("<< ƽ���� ����>> \n");
	printf("�÷��̾� 1 �̸� �Է� >> ");
	scanf("%s", Player_40_name[Player_40_1]);
	printf("�÷��̾� 2 �̸� �Է� >> ");
	scanf("%s", Player_40_name[Player_40_2]);

	if(set_play_order_40() == 0){
		printf("�÷��̾� 1 - %s ���� �����մϴ�.\n", Player_40_name[Player_40_1]);
		play_order = Player_40_1;
	} else {
		printf("�÷��̾� 2 - %s ���� �����մϴ�.\n", Player_40_name[Player_40_2]);
		play_order = Player_40_2;
	}
	do{
		if(available_game_40() == 0){
			printf("������ ���º�\n");
			return;
		}
		input_locate_40(&play_order, Player_40_name[play_order]);
		show_board_40();
	}while((winner = is_finished_40()) == -1);

	printf("�÷��̾� %d - %s �¸�\n", winner + 1 ,Player_40_name[winner]);

	return 0;
}