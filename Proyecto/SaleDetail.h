/**
 * Project SalesSolution
 */

#pragma once
#include "Products.h"
using namespace System;

namespace Proyecto {
    [Serializable]
    public ref class SaleDetail {
    public:
        property Products^ product;
        property int Quantity;
        property double SubTotal;
    };
}
