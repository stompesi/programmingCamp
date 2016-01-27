#include"method.h"

void Effector::Problem6() {
	string str, max_str = " ";
	int i;

	cout << "임의의 이름을 ; 으로 구분하여 입력하시오(단, 마지막 ; 는 생략이 가능합니다)." << endl;

	cin.ignore(1, '\n');

	for (i = 0; i < 4; i++) {
		getline(cin, str, ';');
		cout << i + 1 << " : " << str << endl;
		if (str.size() > max_str.size()) {
			max_str = str;
		}
	}

	getline(cin, str);
	if (str.at(str.size() - 1) == ';') {
		str.erase(str.size() - 1, 1);
	}
	if (str.size() > max_str.size()) {
		max_str = str;
	}
	cout << i + 1 << " : " << str << endl;

	cout << "가장 긴 이름은 " << max_str << endl;
}
