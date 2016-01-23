#include "method.h"

class Hangman {
	string word;
	string correctAnswer;
	int length;
public:
	int begin();
	string& guess_word(char c);
};

int Hangman::begin() {
	correctAnswer = "apple";
	word = "_____";
	length = correctAnswer.length();
	return length;
}

string& Hangman::guess_word(char c) {
	int i;
	for (i = 0; i < length; i++) {
		if (correctAnswer.at(i) == c) {
			word.at(i) = c;
		}
	}
	if (word == correctAnswer) {
		throw word;
	}
	return word;
}

void Effector::Problem20() {
	Hangman hman;
	char c;

	cout << "word length:" << hman.begin() << endl;

	while (1) {
		try {
			cout << "-->";
			cin >> c;
			cout << hman.guess_word(c);
			cout << endl;
		}
		catch (string word) {
			cout << word << " Á¤´ä !" << endl;
			break;
		}
	}
}


