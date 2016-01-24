#include"method.h"
#include<ctype.h>
using namespace std;

typedef enum ArrayName {
	X,
	Y
};

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);				//�������� �䱸�Ѵ�� �Լ� �̸� ǥ��
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
		cout << "������� �ϴ� �迭�� ũ�⸦ �Է��Ͻÿ�>> ";
		getline(cin,input_array_size,'\n');
		if(!ArrayUtility2::inputArraySize(input_array_size)) {
			cout << "�Է� ����! ���� ������ �Է��Ͻÿ�." << endl;
		} else {
			break;
		}
	} while(true);
	array_size = stoi(input_array_size);
	
	cout << "���� " << array_size << "���� �Է��Ͻÿ�. �迭 x�� �����Ѵ�.>> ";
	pArray[ArrayName::X] = new int [array_size];
	for(int i = 0 ; i < array_size ; i++) {
		cin >> pArray[ArrayName::X][i];
	}

	cout << "���� " << array_size << "���� �Է��Ͻÿ�. �迭 y�� �����Ѵ�.>> ";
	pArray[ArrayName::Y] = new int [array_size];
	for(int i = 0 ; i < array_size ; i++) { 
		cin >> pArray[ArrayName::Y][i];
	}

	pArrayConcat = ArrayUtility2::concat(pArray[ArrayName::X], pArray[ArrayName::Y], array_size);
	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;
	for(int i = 0 ; i < array_size * 2 ; i++) {
		cout << (pArrayConcat[i]) << " ";
	}
	cout << endl;

	pArrayRemove = ArrayUtility2::remove(pArray[ArrayName::X], pArray[ArrayName::Y], array_size, return_size);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << return_size << endl;
	for(int i = 0 ; i < return_size ; i++) {
		cout<<pArrayRemove[i] << " ";
	}
	cout << endl;
}
