#pragma once
#include "main.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CRUDFarmacia::main form;
	Application::Run(% form);
}