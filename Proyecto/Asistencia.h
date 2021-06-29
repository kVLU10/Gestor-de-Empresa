#pragma once

using namespace System;

namespace Proyecto {
    [Serializable]

    public ref class Asistencia
    {
    public:
        property DateTime Fecha;
        property String^ Hora;
        property String^ Check;
        property String^ IO;
        Asistencia() {};
        Asistencia(DateTime Fecha, String^ Hora, String^ Check, String^ IO);
    };
}

