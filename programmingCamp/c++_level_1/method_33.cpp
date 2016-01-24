#include"method.h"

void Effector::Problem33() {
	char str[512];

	while (true) {
		if (!cin.get(str, 512, ';')) {
			break;
		}
		cin.ignore(512, '\n');
		cout << str << endl;
	}	
}
