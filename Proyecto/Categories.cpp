/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Categories.h"

/**
 * Categories implementation
 */

Proyecto::Categories::Categories(int id, String^ name, List<Products^>^ productsList)
{
	this->Id = id;
	this->Name = name;
	this->ProductsList = productsList;
}
