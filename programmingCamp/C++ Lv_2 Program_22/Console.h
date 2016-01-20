#ifndef CONSOLE_H
#define CONSOLE_H
#include<string>
#include<iostream>
#include"Computer.h"
using namespace std;
class Console{
	string aCommand;
	Computer* apComputer;
public:
	Console(Computer* pComputer);
	void Run();
};
#endif