#include"method.h"
using namespace std;
#define FILE_NAME "sale-item.txt"

class Goods{
public:
	string aName;
	int aPrice;
	int aAmount;
};

void Effector::Problem1() {
	vector<Goods> storage;
	Goods goods;
	char sd[40];
	fstream fin, fout;

	fin.open(FILE_NAME);
	if(!fin){
		cout << "���� ���� ����" << endl;
		return;
	}
	while(true) {
		getline(fin, goods.aName, '\t');
		fin >> goods.aPrice;
		storage.push_back(goods);
		if(fin.eof()) {
			break;
		}
		fin.seekg(2, ios::cur);
	}
	for(int i =0 ; i < storage.size() ; i++) {
		cout << storage[i].aName << "�� ���� >> ";
		cin >> storage[i].aAmount;
	}
	fout.open("sale.txt");
	if(!fout) {
		cout << "���� ���� ����" << endl;
		return;
	}
	fout << "ǰ��\t\t�ܰ�\t����\t�ݾ�" << endl;
	for(int i = 0 ; i < storage.size() ; i++){
		fout << storage[i].aName << "\t" << storage[i].aPrice << "\t"<<storage[i].aAmount << "\t"<<storage[i].aAmount*storage[i].aPrice << endl;
	}

	cout << "sale.txt�� ���� �ۼ�" << endl;

	fin.close();
	fout.close();
}