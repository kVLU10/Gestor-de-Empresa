#pragma once

using namespace System;

namespace Proyecto {
    [Serializable]

    public ref class Asistencia
    {
    public:
        property String^ Fecha;
        property String^ Hora;
        property String^ Check;
        property String^ IO;
        Asistencia() {};
        Asistencia(String^ Fecha, String^ Hora, String^ Check, String^ IO);
    };
}

