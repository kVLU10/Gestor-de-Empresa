/**
 * Project SalesSolution
 */

#pragma once
#include "Person.h"

using namespace System;

namespace Proyecto {
    [Serializable]
    public ref class Client : public Person {
    public:
        property int BonusPoints;
        Client() {}
        Client(int id, String^ documentNumber, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, 
               String^ address, int bonusPoints, String^ birthday, String^ personalEmail, String^ phoneNumber);
    };
}