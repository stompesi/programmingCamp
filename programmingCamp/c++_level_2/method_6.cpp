#include"method.h"
#include"sstream"

void Effector::Problem6() {
	string str, max_str = "";
	int i = 0;

	cout << "임의의 이름을 ; 으로 구분하여 입력하시오(단, 마지막 ; 는 생략이 가능합니다)." << endl;

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

	cout << "가장 긴 이름은 " << max_str << endl;
}
