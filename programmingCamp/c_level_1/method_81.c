#include "method.h"

int problem_81() {
	char board[30][61] = { 
	{ "************************************************************" }, 
	{ "*                                                          *" },
	{ "*   ****************************************************   *" }, 
	{ "*   *                                                  *   *" },
	{ "*   *   ********************************************   *   *" },
	{ "*   *   *                                          *   *   *" },
	{ "*   *   *   ************************************   *   *   *" },
	{ "*   *   *   *                                  *   *   *   *" },
	{ "*   *   *   *   ****************************   *   *   *   *" },
	{ "*   *   *   *   *                          *   *   *   *   *" },
	{ "*   *   *   *   *   ********************   *   *   *   *   *" },
	{ "*   *   *   *   *   *                  *   *   *   *   *   *" },
	{ "*   *   *   *   *   *   ************   *   *   *   *   *   *" },
	{ "*   *   *   *   *   *   *          *   *   *   *   *   *   *" },
	{ "*   *   *   *   *   *   *   ****   *   *   *   *   *   *   *" },
	{ "*   *   *   *   *   *   *   ****   *   *   *   *   *   *   *" },
	{ "*   *   *   *   *   *   *          *   *   *   *   *   *   *" }, 
	{ "*   *   *   *   *   *   ************   *   *   *   *   *   *" }, 
	{ "*   *   *   *   *   *                  *   *   *   *   *   *" }, 
	{ "*   *   *   *   *   ********************   *   *   *   *   *" }, 
	{ "*   *   *   *   *                          *   *   *   *   *" }, 
	{ "*   *   *   *   ****************************   *   *   *   *" }, 
	{ "*   *   *   *                                  *   *   *   *" }, 
	{ "*   *   *   ************************************   *   *   *" }, 
	{ "*   *   *                                          *   *   *" }, 
	{ "*   *   ********************************************   *   *" }, 
	{ "*   *                                                  *   *" }, 
	{ "*   ****************************************************   *" },
	{ "*                                                          *" },
	{ "************************************************************" } };
	int i, j;

	printf("이런 노가다 프로그램...\n\n");

	for( i = 0 ; i < 30 ; i++) {
		for(j = 0 ; j < 61 ; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}