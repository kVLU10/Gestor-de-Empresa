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
    [Serializable]
    public ref class Sale{
    public:
        property String^ DeliveryAdress;
        property String^ SellAdress;
        property int Quantity;
        property double Total;
        property char State;
        property String^ Date;
        property String^ OrderID;
        
        property Personal^ personal;
        property Client^ client;
        property Store^ store;
        property List<SaleDetail^>^ Details; //Puntero a una lista de punteros a SaleDetail
    };
}
