/**
 * Project SalesSolution
 */

#pragma once

#include "Products.h"
#include "Address.h"

using namespace System;

namespace Proyecto {
    public ref class Store {
    public:
        property String^ Name;
        property int id;
        property String^ Adress;
        property String^ Status;
    };
}