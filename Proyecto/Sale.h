/**
 * Project SalesSolution
 */

#pragma once

#include "Personal.h"
#include "Store.h"
#include "Client.h"
#include "Products.h"
#include "SaleDetail.h"

using namespace System;

namespace Proyecto {
    public ref class Sale{
    public:
        property String^ DeliveryAdress;
        property String^ SellAdress;
        property int Quantity;
        property char State;
        property DateTime Date;
        property String^ OrderID;
        property Products^ product;
        property Personal^ personal;
        property Client^ client;
        property Store^ store;
    };
}
