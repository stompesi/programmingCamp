#include"method.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int G_LUCKY_NUBMER[6] = {0,};
int G_COUNT = 0;
int is_dupl(int new_num){
	int i;
	for(i = 0 ; i < 6 ; i++){
		if(G_LUCKY_NUBMER[i] == new_num){
			return 0;
		}
	}
	G_LUCKY_NUBMER[G_COUNT] = new_num;
	return 1;
}
void sort_number(){
	int i, j,temp;
	for(i = 0 ; i < 6 ; i++){
		for(j = i ; j < 6 ; j++){
			if(G_LUCKY_NUBMER[i] > G_LUCKY_NUBMER[j]){
				temp = G_LUCKY_NUBMER[i];
				G_LUCKY_NUBMER[i] = G_LUCKY_NUBMER[j];
				G_LUCKY_NUBMER[j] = temp;
			}
		}
	}
}
void init_num(){
	int i;
	G_COUNT = 0;
	for(i = 0 ; i < 6 ; i++){
		G_LUCKY_NUBMER[i] = 0;
	}
}
void show_number(){
	int i;
	for(i = 0 ; i < 6 ; i++){
		printf("%d ", G_LUCKY_NUBMER[i]);
	}
}
int problem_76(){
	char input[2];
	srand((unsigned)time(NULL));
	printf("행운의 번호\n");
	do{
		init_num();
		while(G_COUNT < 6){
			if(is_dupl(rand()%44 + 1) == 1){
				G_COUNT++;
			}
		}
		sort_number();
		show_number();
		printf("\n번호가 맘에 드니? (y/n) : ");
		scanf("%s", input);
	}while(input[0] != 'y');
}