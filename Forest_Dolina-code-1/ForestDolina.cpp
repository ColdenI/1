#include "ForestDolina.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ForestDolina::ForestDolina form; // mathpro �������� ������� , hello �������� ���� (�����)
    Application::Run(% form);
}
