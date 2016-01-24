#include "method.h"

int problem_95() {
	int n = 0x324F3A24;
	int i;
	char *pc = (char *)(&n + 1);
	printf("%d, %#p\n", &n, n);

	for( i = 0 ; i < 4 ; i++) {
		printf("%d, %#p\n", pc, *(--pc));
	}

	pc += 4 ;
	
	for( i = 0 ; i < 4 ; i++) {
		printf("%#p\n", *(--pc));
	}
	printf("\n");
	
	return 0;
}