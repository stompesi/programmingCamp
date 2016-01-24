#include "method.h"

int problem_47() {
	int i = 0x324f3A24;
	char *pc = &i;

	printf("%0x\n", *(pc + 3));
	printf("%0x\n", *(pc + 2));
	printf("%0x\n", *(pc + 1));
	printf("%0x\n", *(pc + 0));

	printf("%0x%0x%0x%0x\n", *pc, *(pc + 1), *(pc + 2), *(pc + 3));

	return 0;
}
