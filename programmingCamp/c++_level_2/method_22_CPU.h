#ifndef CPU_H
#define CPU_H
//#include"ControlUnit.h"
#include"method_22_ProgramCounter.h"
#include"method_22_DataRegister.h"
#include"method_22_ArithmeticLogicUnit.h"
#include"method_22_InstructionRegister.h"
#include"method_22_FlagRegister.h"
#include"method_22_Spec.h"
#include"method_22_RAM.h"
#include"method_22_ROM.h"
class ControlUnit;
typedef enum Register_Name{
	A,
	B,
	C
};
class CPU{
public:
	ControlUnit* apControlUnit;
	ArithmeticLogicUnit aArithmeticLogicUnit;
	DataRegister aRegister[REGISTER_SIZE];
	ProgramCounter aProgramCounter;
	InstructionRegister aInstructionRegister;
	FlagRegister aFlagRegister;
	RAM* arRAM;
	ROM* arROM;
	bool aEmilminate;
	CPU(RAM* rRam, ROM* rRom);
	void ShowData();
	void OperatingJob();
};

#endif