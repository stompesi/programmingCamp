#include"FlagRegister.h"
void FlagRegister::SetFlag(int flag){
	aFlag = flag;
}
int FlagRegister::GetFlag(){
	return aFlag;
}
FlagRegister::FlagRegister(){
	aFlag = 0;
}