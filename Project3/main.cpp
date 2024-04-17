#include "WelcomePage.h"
#include "MainPage.h"
#include "ResultPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::WelcomePage welcomeForm;
	Application::Run(% welcomeForm);
}