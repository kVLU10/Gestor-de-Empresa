/**
 * Project SalesSolution
 */

#pragma once
#include "Provincie.h"

using namespace System;

namespace Proyecto {
    public ref class Distrit {
    public:
        property String^ Name;
        property Provincie^ Provincie;

        Distrit() {}
        Distrit(String^ name);
    };
}