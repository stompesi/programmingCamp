#include"method.h"

void Effector::Problem6() {
	string str, max_str = " ";
	int i;

	cout << "������ �̸��� ; ���� �����Ͽ� �Է��Ͻÿ�(��, ������ ; �� ������ �����մϴ�)." << endl;

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

	cout << "���� �� �̸��� " << max_str << endl;
}
