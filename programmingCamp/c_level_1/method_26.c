#include "method.h"

int problem_26() {
	int n = 1, sum = 0;

	printf("1~n까지의 합 중 1000을 넘지않는 가장 큰 합과 그때의 n을 구하는 프로그램\n");
	
	while (1) {
		sum += n;
		if(sum > 1000) {
			sum -= n;
			n -= 1;
			break;
		}
		n++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}