/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Client.h"

/**
 * Client implementation
 */

Proyecto::Client::Client(int id, String^ documentNumber, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, 
						 String^ address, int bonusPoints, String^ birthday, String^ personalEmail, String^ phoneNumber)
{
	this->Id = id;
	this->DocumentNumber = documentNumber;
	this->FirstName = firstName;
	this->SecondName = secondName;
	this->FirstLastName = firstLastName;
	this->SecondLastName = secondLastName;
	this->Address = address;
	this->BonusPoints = bonusPoints;
	this->PersonalEmail = personalEmail;
	this->PhoneNumber = phoneNumber;
	this->Birthday = birthday;
}
