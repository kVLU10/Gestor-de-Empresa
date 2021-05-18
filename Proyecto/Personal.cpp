/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Personal.h"

/**
 * Personal implementation
 */

Proyecto::Personal::Personal(int id, String^ username, String^ password, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, char status, double salary, double incress, 
							 String^ personalEmail, String^ phoneNumber, String^ birthday)
{
	this->Id = id;
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
}