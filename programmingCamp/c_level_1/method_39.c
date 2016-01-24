#include "method.h"

int problem_39() {
	int year;
	
	printf("ÅÂ¾î³­ »ı³âÀ» ÀÔ·ÂÇÏ¸é ¶ì¸¦ Ãâ·ÂÇÏ´Â ÇÁ·Î±×·¥\n");

	printf("ÅÂ¾î³­ ³âµµ´Â? ");
	scanf("%d", &year);

	year = (year - 1900) % 12;

	switch (year) {
	case 0: printf(">> Áã¶ì\n"); break;
	case 1: printf(">> ¼Ò¶ì\n"); break;
	case 2: printf(">> È£¶ûÀÌ¶ì\n"); break;
	case 3: printf(">> Åä³¢¶ì\n"); break;
	case 4: printf(">> ¿ë¶ì\n"); break;
	case 5: printf(">> ¹ì¶ì\n"); break;
	case 6: printf(">>¸»¶ì\n"); break;
	case 7: printf(">>¾ç¶ì\n"); break;
	case 8: printf(">>¿ø¼şÀÌ¶ì\n"); break;
	case 9: printf(">>´ß¶ì\n"); break;
	case 10: printf(">>°³¶ì\n"); break;
	case 11: printf(">>µÅÁö¶ì\n"); break;
	default:
		break;
	}
	return 0;
}