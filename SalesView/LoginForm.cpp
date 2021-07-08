#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesView::LoginForm::btnAccept_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Personal^ personal = SalesController::SalesManager::ValidateUser(txtUsername->Text,
																		txtPassword->Text);*/
	Personal^ personal = SalesController::SalesManager::ValidateUser(txtUsername->Text, txtPassword->Text);
	if (personal != nullptr) {
		MessageBox::Show("Bienvenido " + personal->FirstName + " " +
						 personal->FirstLastName);
		this->Hide();
		SalesMainForm::personal = personal;
	}
	else
	{
		MessageBox::Show("Usuario o contraseña ingresada no es correcta");
	}
}