#include"Console.h"
Console::Console(Computer* pComputer){
	this->apComputer = pComputer;
}
void Console::Run(){
	do{
		cout<<"jhKang -]$ ";
		getline(cin, aCommand, '\n');
		cout<<apComputer->RunProgram(aCommand);
		cout.flush();
	}while(aCommand != "exit");
	cout<<"Computer Power Off"<<endl;
}