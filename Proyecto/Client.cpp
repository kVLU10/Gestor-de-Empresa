/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Client.h"

/**
 * Client implementation
 */

Proyecto::Client::Client(int id, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, 
						 String^ address, int bonusPoints)
{
	this->Id = id;
	this->FirstName = firstName;
	this->SecondName = secondName;
	this->FirstLastName = firstLastName;
	this->SecondLastName = secondLastName;
	this->Address = address;
	this->BonusPoints = bonusPoints;
}