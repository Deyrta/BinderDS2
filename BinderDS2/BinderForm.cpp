#include "BinderForm.h"

using namespace BinderDS2;



int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew BinderForm);
	return 0;
}


