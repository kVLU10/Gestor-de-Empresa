/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Categories.h"

/**
 * Categories implementation
 */

Proyecto::Categories::Categories(int id, String^ name, String^ productList)
{
	this->Id = id;
	this->Name = name;
	this->ProductList = productList;
}
