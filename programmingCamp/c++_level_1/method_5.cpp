#include "method.h"

// 문제 - 실행함수
void Effector::Problem5() {
	string header_line(70, '-');
	string header_text1("Please enter some text!");
	string header_text2("Terminate the input with an empty line(just typing enter key).");
	string input_text;
	string reverse_text;

	cout << header_line << endl;
	cout << header_text1 << endl;
	cout << header_text2 << endl;	
	cout << header_line << endl;

	while (true) {
		getline(cin, input_text);
		if(input_text.length() == 0)
			break;
		reverse_text = input_text + '\n' + reverse_text;
	}

	cout << "Your lines of text in reverse order:" << endl << endl;
	cout << reverse_text << endl;
}
