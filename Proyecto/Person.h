/**
 * Project SalesSolution
 */

#pragma once

using namespace System;

namespace Proyecto {
    public ref class Person {
    public:
        property int Id;
        property String^ FirstName;
        property String^ SecondName;
        property String^ FirstLastName;
        property String^ SecondLastName;
        property String^ PhoneNumber;
        property String^ DocumentNumber;
        property String^ BusinessEmail;
        property String^ PersonalEmail;
        property String^ Address;
        property String^ Username;
        property String^ Password;
        property char Status;
        property String^ Birthday;
        Person() {}
        Person(int id, String^ username, String^ password, String^ firstName, String^ secondName, String^ firstLastName,
            String^ secondLastName, String^ businessEmail, String^ personalEmail, String^ address, String^ phoneNumber, 
            char status, String^ birthday, String^ documentNumber);
    };
}