/**
 * Project SalesSolution
 */

#pragma once

#include "Categories.h"
#include "Brand.h"
#include "Price.h"

using namespace System;

namespace Proyecto {
    public ref class Products {
    public:
        property int Id;
        property String^ Name;
        property int Quantity;
        property int BonusPoints;
        property char Status;
        property double Precio;
        property String^ Marca;
        property String^ Description;
        property Categories^ Categories;
        property Brand^ Brand;
        property Price^ Price;
        Products() {}
        Products(int id, String^ name, String^ description, int bonusPoints, double price, String^ brand, char status);
    };
}