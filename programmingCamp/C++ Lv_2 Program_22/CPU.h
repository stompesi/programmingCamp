#ifndef CPU_H
#define CPU_H
//#include"ControlUnit.h"
#include"ProgramCounter.h"
#include"DataRegister.h"
#include"ArithmeticLogicUnit.h"
#include"InstructionRegister.h"
#include"FlagRegister.h"
#include"Spec.h"
#include"RAM.h"
#include"ROM.h"
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