#include"DataRegister.h"
void DataRegister::SetValue(int value){
	this->aStoreValue = value;
}
int DataRegister::GetValue(){
	return this->aStoreValue;
}