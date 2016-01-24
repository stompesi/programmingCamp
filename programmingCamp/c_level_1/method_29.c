#include "method.h"
#define G 9.80665

int problem_29() {
	int t=0;
	double h = 200;

	printf("시간\t높이\n");
	printf("===================\n");
	while(1) {
		if(t == 0) {
			printf("%2d초\t%.0lfM\n", t, h);
		} else {
			h = 200 - 0.5 * G * t * t;
			if(h < 0) {
				break;
			}
			printf("%2d초\t%.1lfM\n", t, h);
		}
		t++;
	}
	return 0;
}