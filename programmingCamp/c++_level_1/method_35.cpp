#include "method.h"

void Effector::Problem35() {
	int i;

	for(i = 1; i < 100; i++) {
		if((i % 10) != 0 && (i % 10) % 3 == 0) {
			if((i / 10) != 0 && (i / 10) % 3 == 0) {
				cout << i << " �ڼ� �� ��" << endl;
			}
			else {
				cout << i << " �ڼ� �� ��" << endl;
			}
		}
		else {
			if ((i / 10) != 0 && (i / 10) % 3 == 0) {
				cout << i << " �ڼ� �� ��" << endl;
			}
		}
	}
}
