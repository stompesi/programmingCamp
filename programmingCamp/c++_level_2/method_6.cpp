#include"method.h"
#include"sstream"

void Effector::Problem6() {
	string str, max_str = "";
	int i = 0;

	cout << "������ �̸��� ; ���� �����Ͽ� �Է��Ͻÿ�(��, ������ ; �� ������ �����մϴ�)." << endl;

	cin.ignore(1, '\n');

	getline(cin, str);
	stringstream s_stream(str);
	while (getline(s_stream, str, ';')) {
		i++;
		cout << i << " : " << str << endl;
		if (str.size() > max_str.size()) {
			max_str = str;
		}
	}

	cout << "���� �� �̸��� " << max_str << endl;
}
