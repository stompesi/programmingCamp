#include "method.h"

int problem_6() {
	int max = 100, min = 1, random, n, count = 0;

	// 매번 실행할때마다 다른 난수를 발생시키기 위해 시드 값을 시간으로 주었다.
	// 1부터 100까지의 난수이므로 범위지정을 하였다.
	// 입력받은 수가 난수보다 작으면 min값을 입력받은 수로
	// 입력받은 수가 난수보다 크면 max값을 입력받은 수로 설정
	// 틀릴때마다 카운트 증가
	// 맞추면 몇번만에 맞췄는지 출력

	srand((unsigned)time(NULL));
	random = rand() % 100 + 1;

	while (1) {
		printf("%d부터 %d사이의 수를 입력하세요. ", min, max);
		scanf("%d", &n);
		
		if (n < 1 || n > 100) {
			printf("잘못된 입력입니다.\n");
			return 0;
		}
		if (n == random) {
			break;
		} else if (n > random) {
			max = n;
			count++;
		} else if (n < random) {
			min = n;
			count++;
		}
	}
	printf("%d번만에 맞췄습니다.\n", count);

	return 0;
}