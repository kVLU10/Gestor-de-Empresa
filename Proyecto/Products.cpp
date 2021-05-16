/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Products.h"

/**
 * Products implementation
 */

Proyecto::Products::Products(int id, String^ name, String^ description, int bonusPoints, double price, String^ brand, char status)
{
    this->Id = id;
    this->Name = name;
    this->Description = description;
    this->BonusPoints = bonusPoints;
    this->Precio = price;
    this->Marca = brand;
    this->Status = status;
}
