#include "method.h"

void Effector::Problem35() {
	int i;

	for(i = 1; i < 100; i++) {
		if((i % 10) != 0 && (i % 10) % 3 == 0) {
			if((i / 10) != 0 && (i / 10) % 3 == 0) {
				cout << i << " 박수 두 번" << endl;
			}
			else {
				cout << i << " 박수 한 번" << endl;
			}
		}
		else {
			if ((i / 10) != 0 && (i / 10) % 3 == 0) {
				cout << i << " 박수 한 번" << endl;
			}
		}
	}
}
