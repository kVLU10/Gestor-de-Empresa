/**
 * Project SalesSolution
 */

#pragma once

using namespace System;

#include "Percentage.h"
#include "PriceByRange.h"
#include "NxM.h"

namespace Proyecto {
    public ref class Price {
    public:
        property double InitialPrice;
        property Percentage^ percentage;
        property PriceByRange^ priceByRange;
        property NxM^ nxM;
    };
}