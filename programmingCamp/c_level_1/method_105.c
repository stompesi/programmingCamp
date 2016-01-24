#include "method.h"

int money;
int money_count(int money_size) {
	if(money >= money_size) {
		money = money - 10 * (money / money_size);
		return (money / money_size);
	}
	return 0;
}


int problem_105() {

	int fifty_thousand, ten_thousand, five_housand;
	int one_thousand, five_hundread, one_undread;
	int fifty, ten, five, one;

	printf("지폐와 동전을 구하는 프로그램\n");

	printf("금액을 입력 : ");
	scanf("%d", &money);

	fifty_thousand = money_count(50000);
	ten_thousand = money_count(10000);
	five_housand = money_count(5000);
	one_thousand = money_count(1000);
	five_hundread = money_count(500);
	one_undread = money_count(100);
	fifty = money_count(50);
	ten = money_count(10);
	five = money_count(5);
	one = money;

	printf("5만원 : %d\n", fifty_thousand);
	printf("1만원 : %d\n", ten_thousand);
	printf("5천원 : %d\n", five_housand);
	printf("1천원 : %d\n", one_thousand);
	printf("500원 : %d\n", five_hundread);
	printf("100원 : %d\n", one_undread);
	printf(" 50원 : %d\n", fifty);
	printf(" 10원 : %d\n", ten);
	printf("  5원 : %d\n", five);
	printf("  1원 : %d\n", one);
}

