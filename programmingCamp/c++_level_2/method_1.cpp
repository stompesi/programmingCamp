#include"method.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
class Utility{
	vector<string> aVectorStorage;
	string* apWord;
	int aSize;
public:
	Utility(int argc, char* argv[]);
	void UsedSTL();
	void DisusedSTL();
	~Utility();
};
Utility::Utility(int argc, char* argv[]){
	apWord = new string[argc];
	aSize = argc - 1;
	for(int i = 1 ; i < argc ; i++){
		aVectorStorage.push_back(argv[i]);
		apWord[i] = argv[i];
	}
}
void Utility::DisusedSTL(){
	string temp_string;
	cout<<"DISUSE STL"<<endl;
	for(int i = 0 ; i < aSize - 1 ; i++){
		for(int j = i + 1 ; j < aSize ; j++){
			if(apWord[i].compare(apWord[j]) > 0){
				temp_string = apWord[i];
				apWord[i] = apWord[j];
				apWord[j] = temp_string;
			}
		}
	}
	for(int i = 0 ; i < aSize ; i++){
		cout<<apWord[i]<<endl;
	}
}
Utility::~Utility(){
	delete apWord;
}
void Utility::UsedSTL(){
	cout<<"USE STL"<<endl;
	sort(aVectorStorage.begin(), aVectorStorage.end());
	for(int i = 0 ; i < aVectorStorage.size() ; i++){
		cout<<aVectorStorage[i]<<endl;
	}
}
void Effector::Problem1(int argc, char* argv[]){
	Utility util(argc, argv);
	util.UsedSTL();
	util.DisusedSTL();
	
}