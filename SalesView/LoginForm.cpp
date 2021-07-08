#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesView::LoginForm::btnAccept_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Personal^ personal = SalesController::SalesManager::ValidateUser(txtUsername->Text,
																		txtPassword->Text);*/
	Person^ person = SalesController::SalesManager::ValidateUser(txtUsername->Text, txtPassword->Text);
	if (person != nullptr) {
		MessageBox::Show("Bienvenido " + person->FirstName + " " +
						 person->FirstLastName);
		this->Hide();
		SalesMainForm::person = person;
	}
	else
	{
		MessageBox::Show("Usuario o contraseña ingresada no es correcta");
	}
}