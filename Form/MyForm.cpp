#include "MyForm.h"
#include "Game.h"
#include "CBattle.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Form;

[STAThreadAttribute] 
int main(array<String^> ^args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyForm form_obj;
	CBattle form_obj2;
	//Application::Run(%form_obj);
	Application::Run(% form_obj2);
}
