#include<iostream>
#include<vector>

using namespace std;
void Problem_32(){
	vector<int> integer_storage;
	int input;
	int total_sum;
	double average;
	vector<int>::iterator it;
	do{
		cout<<"정수를 입력하세요 <0을 입력하면 종료>>> ";
		cin>>input;
		if(input == 0){
			break;
		}
		integer_storage.push_back(input);
		total_sum = 0;
		for(it = integer_storage.begin() ; it != integer_storage.end() ; it++){
			cout<<*it<<" ";
			total_sum += *it;
		}
		cout<<endl;
		average = (double)total_sum/integer_storage.size();
		cout<<integer_storage.size()<<"개의 정수의 평균 = "<<average<<endl;
	}while(true);

	cout<<"프로그램을 종료합니다."<<endl;
}


