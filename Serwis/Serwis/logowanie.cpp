#include "logowanie.h"


using namespace Serwis; //nazwa projektu


[STAThreadAttribute]

int main(array<String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Serwis::logowanie forma; //MyForm to okno ktore sie pojawi po uruchomieniu 
	Application::Run(%forma);
	return 0;
}