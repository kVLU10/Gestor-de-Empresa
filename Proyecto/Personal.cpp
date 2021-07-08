/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Personal.h"

/**
 * Personal implementation
 */

Proyecto::Personal::Personal(int id, String^ documentNumber, String^ username, String^ password, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, char status, double salary, double incress, 
							 String^ personalEmail, String^ phoneNumber, String^ birthday, array<Byte>^ huella, List<Asistencia^>^ asistenciaList, String^ activo)
{
	this->Id = id;
	this->DocumentNumber = documentNumber;
	this->Username = username;
	this->Password = password;
	this->FirstName = firstName;
	this->SecondName = secondName;
	this->FirstLastName = firstLastName;
	this->SecondLastName = secondLastName;
	this->Status = status;
	this->Salary = salary;
	this->Incress = incress;
	this->PersonalEmail = personalEmail;
	this->PhoneNumber = phoneNumber;
	this->Birthday = birthday;
	this->Huella = huella;
	this->AsistenciaList = asistenciaList;
	this->Activo = activo;
}

Proyecto::Personal::Personal(String^ userName, String^ passWord)
{
	this->Username = userName;
	this->Password = passWord;
}