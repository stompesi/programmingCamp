#include"method.h"
#include<ctype.h>
using namespace std;

typedef enum ArrayName {
	X,
	Y
};

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);				//문제에서 요구한대로 함수 이름 표기
	static int* remove(int s1[], int s2[],int size, int& retSize);
	static bool inputArraySize(string input);
};

bool ArrayUtility2::inputArraySize(string input) {
	for(int i = 0 ; i < input.size() ; i++) {
		if(isdigit(input[i])) {
			return true;
		} else {
			return false;
		}
	}
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int count = 0;
	int *arrayRemove;

	retSize = size;
	for(int i = 0 ; i < size ; i++) {
		for(int j = 0 ; j < size ; j++) {
			if(s1[i] == s2[j]) {
				retSize--;
				break;
			}
		}
	}
	if(retSize == 0) {
		return NULL;
	}

	arrayRemove = new int[retSize];
	for(int i = 0 ; i < size ; i++) {
		for(int j = 0 ; j < size ; j++) {
			if(j == size -1) {
				arrayRemove[count++] = s1[i];
			}
			if(s1[i] == s2[j]) {
				break;
			}
		}
	}
	return arrayRemove;
}
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* pDstArray = new int[size * 2];
	for(int i = 0 ; i < size ; i++) {
		pDstArray[i] = s1[i];
	}
	for(int i = size ; i < size*2 ; i++) {
		pDstArray[i] = s2[i-size];
	}
	return pDstArray;
}
void Effector::Problem28() {
	string input_array_size;
	int array_size;
	int return_size;
	int *pArray[2];
	int *pArrayConcat;
	int *pArrayRemove;

	do {
		cout << "만들고자 하는 배열의 크기를 입력하시오>> ";
		getline(cin,input_array_size,'\n');
		if(!ArrayUtility2::inputArraySize(input_array_size)) {
			cout << "입력 오류! 양의 정수를 입력하시오." << endl;
		} else {
			break;
		}
	} while(true);
	array_size = stoi(input_array_size);
	
	cout << "정수 " << array_size << "개를 입력하시오. 배열 x에 삽입한다.>> ";
	pArray[ArrayName::X] = new int [array_size];
	for(int i = 0 ; i < array_size ; i++) {
		cin >> pArray[ArrayName::X][i];
	}

	cout << "정수 " << array_size << "개를 입력하시오. 배열 y에 삽입한다.>> ";
	pArray[ArrayName::Y] = new int [array_size];
	for(int i = 0 ; i < array_size ; i++) { 
		cin >> pArray[ArrayName::Y][i];
	}

	pArrayConcat = ArrayUtility2::concat(pArray[ArrayName::X], pArray[ArrayName::Y], array_size);
	cout << "합친 정수 배열을 출력한다." << endl;
	for(int i = 0 ; i < array_size * 2 ; i++) {
		cout << (pArrayConcat[i]) << " ";
	}
	cout << endl;

	pArrayRemove = ArrayUtility2::remove(pArray[ArrayName::X], pArray[ArrayName::Y], array_size, return_size);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << return_size << endl;
	for(int i = 0 ; i < return_size ; i++) {
		cout<<pArrayRemove[i] << " ";
	}
	cout << endl;
}
