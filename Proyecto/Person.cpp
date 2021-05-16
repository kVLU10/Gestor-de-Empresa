/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Person.h"

/**
 * Person implementation
 */

Proyecto::Person::Person(int id, String^ username, String^ password, String^ firstName, String^ secondName, 
                         String^ firstLastName, String^ secondLastName, String^ businessEmail, String^ personalEmail,
                         String^ address, String^ phoneNumber, char status, String^ birthday, String^ documentNumber)
{
    this->Id = id;
    this->Username = username;
    this->Password = password;
    this->FirstName = firstName;
    this->SecondName = secondName;
    this->FirstLastName = firstLastName;
    this->SecondLastName = secondLastName;
    this->BusinessEmail = businessEmail;
    this->PersonalEmail = personalEmail;
    this->Address = address;
    this->PhoneNumber = phoneNumber;
    this->Status = status;
    this->Birthday = birthday;
    this->DocumentNumber = documentNumber;
}
