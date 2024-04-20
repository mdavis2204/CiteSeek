#include "WelcomePage.h"
#include "MainPage.h"
#include "ResultPage.h"

using namespace System;
using namespace System::Windows::Forms;

/*
CITATIONS:

INSTALL AND CODE TUTORIALS

C++ GUI: Install C++ CLR Workloads in Visual Studio | WinForms by Sciber
	Used for intalling the C++ version of Winforms using VS
https://www.youtube.com/watch?v=HcxlYkU8aY0&list=PL2i17lRog5pBe7t9zJdFdugQ6bxgjntJD&index=2

C++ GUI: Modern Sign in Form Design (FULL) | WinForms by Sciber
	Used for learning how to create different objects in Winforms (buttons, panels, etc.), how to create event handlers, and input validation
https://www.youtube.com/watch?v=b8R5D0lryq0

Event Handlers Overview (Windows Forms):
	Used to learn more about creating event handlers
https://learn.microsoft.com/en-us/dotnet/desktop/winforms/event-handlers-overview-windows-forms?view=netframeworkdesktop-4.8

Hiding a form and showing another when a button is clicked in a Windows Forms application
	Used to find out how to open one form and "close" another by hiding it.
https://stackoverflow.com/questions/4345666/hiding-a-form-and-showing-another-when-a-button-is-clicked-in-a-windows-forms-ap

IMAGES USED:

Welcome Page Background received from here:
https://www.criminalandduilawofgeorgia.com/2020/07/10/traffic-violation-or-criminal-charge-is-there-a-difference/

Result Page Background received from here:
https://www.pexels.com/search/parking%20lot/

*/


[STAThread]

void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::WelcomePage welcomeForm;
	Application::Run(% welcomeForm);
}