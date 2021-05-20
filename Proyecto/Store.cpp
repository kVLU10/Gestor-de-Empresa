/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Store.h"

/**
 * Store implementation
 */

Proyecto::Store::Store(String^ name, int id, String^ adress, String^ status)
{
    this->Id = id;
    this->Name = name;
    this->Adress = adress;
    this->Status = status;
}