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
		cout << "파일 열기 실패" << endl;
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
		cout << storage[i].aName << "의 수량 >> ";
		cin >> storage[i].aAmount;
	}
	fout.open("sale.txt");
	if(!fout) {
		cout << "파일 열기 실패" << endl;
		return;
	}
	fout << "품명\t\t단가\t수량\t금액" << endl;
	for(int i = 0 ; i < storage.size() ; i++){
		fout << storage[i].aName << "\t" << storage[i].aPrice << "\t"<<storage[i].aAmount << "\t"<<storage[i].aAmount*storage[i].aPrice << endl;
	}

	cout << "sale.txt로 파일 작성" << endl;

	fin.close();
	fout.close();
}