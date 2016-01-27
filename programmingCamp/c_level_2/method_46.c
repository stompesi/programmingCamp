#include"method.h"
#include<stdio.h>

char G_WORD[14] = "concatenation";
char G_BLANK[14] = "_____________";
int flag = 0;
void mark_blank(char answer) {
	int i = 0;
	for(i = 0 ; i < *(G_BLANK + i) != NULL ; i++) {
		if(G_WORD[i] == answer){
			G_BLANK[i] = answer;
		}
	}
	for(i = 0 ; i < *(G_BLANK + i) != NULL ; i++) {
		if(G_WORD[i] != G_BLANK[i]){
			return;
		}
	}
	flag = 1;
}
int problem_46() {
	char answer;
	int count = 0;
	printf("%s\n", G_BLANK);
	while(flag == 0) {
		if(count > 15) {
			printf("game over\n");
			break;
		}
		scanf("%c",&answer);
		mark_blank(answer);
		printf("%s\n", G_BLANK);
	}
	printf("end\n");
	return 0;
}

