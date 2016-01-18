#include"method.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<regex>
using namespace std;
#define FILE_PATH "words.txt"
class PalindromeString{
public:
	string aOriginWord;
	string aTransWord;
};

class DiscrimPalinWord{
	vector<PalindromeString> aStorage;
	fstream aFileIn;
	string aFilePath;
public:
	DiscrimPalinWord(string path);
	bool OpenFile();
	void Run();
	void ReadWord();
	void Preprocessing();
	void ShowPalindrome();
	bool IsStored(string srcString);
	bool IsPalindrome(string srcString);
	string TrimWord(string srcString);
};
bool DiscrimPalinWord::IsPalindrome(string srcString){
	int startPosition = 0, endPosition = srcString.length() -1;
	for(; startPosition <= endPosition ; startPosition++, endPosition--){
		if(srcString[startPosition] != srcString[endPosition]){
			return false;
		}
	}
	return true;
}
void DiscrimPalinWord::ShowPalindrome(){
	for(int i =0  ; i < aStorage.size() ; i++){
		if(IsPalindrome(aStorage[i].aTransWord)){
			cout<<aStorage[i].aOriginWord<<endl;
		}
	}
}
DiscrimPalinWord::DiscrimPalinWord(string path){
	aFilePath = path;
}
bool DiscrimPalinWord::OpenFile(){
	aFileIn.open(aFilePath);
	return aFileIn.is_open();
}
void DiscrimPalinWord::ReadWord(){
	PalindromeString word;
	while(!aFileIn.eof()){
		getline(aFileIn, word.aOriginWord, '\n');
		aStorage.push_back(word);
	}
}
string DiscrimPalinWord::TrimWord(string srcString){//ctype.c의 isalpha() 함수 이용해도 될 듯.
	regex alphabet_regex("[^a-zA-Z]*");		
	string dstString;
	dstString = regex_replace(srcString, alphabet_regex, "");
	std::transform(dstString.begin(), dstString.end(), dstString.begin(), tolower);	//소문자 변환
	return dstString;
}
void DiscrimPalinWord::Preprocessing(){			
	for(int i = 0 ; i < aStorage.size(); i++){
		aStorage[i].aTransWord = TrimWord(aStorage[i].aOriginWord);
	}
}
bool DiscrimPalinWord::IsStored(string srcString){
	for(int i =0 ; i < aStorage.size() ; i++){
		if(aStorage[i].aOriginWord == srcString){
			return true;
		}
	}
	return false;
}
void DiscrimPalinWord::Run(){
	string input_string;
	try{
		if(!OpenFile()){
			throw "파일 오픈 실패";
		}
		ReadWord();
		Preprocessing();
		cout<<"문제 16-1"<<endl;
		ShowPalindrome();
		cout<<"문제 16-2"<<endl;
		cin>>input_string;
		if(IsStored(input_string)){
			if(IsPalindrome(TrimWord(input_string))){
				cout<<"'"<<input_string<<"' is palindrome and is in \"words.txt\""<<endl; 
			} else {
				cout<<"'"<<input_string<<"' is NOT palindrome and is in \"words.txt\""<<endl;
			}
		} else {
			if(IsPalindrome(TrimWord(input_string))){
				cout<<"'"<<input_string<<"' is palindrome and is NOT in \"words.txt\""<<endl;
			} else {
				cout<<"'"<<input_string<<"' is NOT palindrome and is NOT in \"words.txt\""<<endl;
			}
		}
	}catch(char* message){
		cout<<message<<endl;
		return ;
	}
}
void Effector::Problem16(){
	DiscrimPalinWord program(FILE_PATH);
	program.Run();

}