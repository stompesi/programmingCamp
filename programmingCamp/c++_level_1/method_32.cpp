#include"method.h"
#include<vector>
#include<ctype.h>

bool IsInteger(string inputString) {
	for(int i = 0 ; i < inputString.size() ; i++) {
		if(!isdigit(inputString[i])) {
			return false;
		}
	}
	return true;
}

void Effector::Problem32() {
	vector<int> integer_storage;
	vector<int>::iterator it;
	string input;
	int input_integer;
	int total_sum;
	double average;
	
	do {
		cout << "������ �Է��ϼ��� <0�� �Է��ϸ� ����>>> ";
		getline(cin,input,'\n');
		if(IsInteger(input)) {
			input_integer = stoi(input);
			if(input_integer == 0) {
				break;
			}
		} else {
			cout << "�Է��� �ٸ��� �ʽ��ϴ�. ������ �Է��ϼ���" << endl;
			continue;
		}
		integer_storage.push_back(input_integer);
		total_sum = 0;
		for(it = integer_storage.begin() ; it != integer_storage.end() ; it++) {
			cout<<*it << " ";
			total_sum += *it;
		}
		cout << endl;
		average = (double)total_sum / integer_storage.size();
		cout << integer_storage.size() << "���� ������ ��� = " << average << endl;
	} while(true);

	cout << "���α׷��� �����մϴ�." << endl;
}


