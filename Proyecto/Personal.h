/**
 * Project SalesSolution
 */

#pragma once
#include "Person.h"

using namespace System;

namespace Proyecto {
    [Serializable]
    public ref class Personal : public Person {
    public:
        property double Salary;
        property double Incress;
        Personal() {}
        Personal(int id, String^ username, String^ password, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, char status, double salary, double incress, 
                 String^ personalEmail, String^ phoneNumber, String^ birthday);
    };
}