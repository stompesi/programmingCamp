#include"method.h"
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Utility{
	vector<string> aVectorStorage;
	string* aWord;
public:
	Utility(int argc, char* argv[]);
	void UsedSTL();
	void DisusedSTL();
};
Utility::Utility(int argc, char* argv[]){
	aWord = new string[argc];
	for(int i = 1 ; i < argc ; i++){
		aVectorStorage.push_back(argv[i]);
		aWord[i] = argv[i];
	}
}
void Utility::UsedSTL(){


}
void Effector::Problem1(int argc, char* argv[]){
	Utility util(argc, argv);
	
}