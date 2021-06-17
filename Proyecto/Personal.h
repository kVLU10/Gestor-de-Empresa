/**
 * Project SalesSolution
 */

#pragma once
#include "Person.h"
#include "Asistencia.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto {
    [Serializable]
    public ref class Personal : public Person {
    public:
        property double Salary;
        property double Incress;
        property array<Byte>^ Huella;
        property List<Asistencia^>^ AsistenciaList;
        property String^ Activo;
        Personal() {}
        Personal(int id, String^ username, String^ password, String^ firstName, String^ secondName, String^ firstLastName, String^ secondLastName, char status, double salary, double incress, 
                 String^ personalEmail, String^ phoneNumber, String^ birthday, array<Byte>^ huella, List<Asistencia^>^ asistenciaList, String^ Activo);
    };
}