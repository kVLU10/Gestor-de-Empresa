/**
 * Project SalesSolution
 */

#pragma once
#include "Products.h"
using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto {
    [Serializable]
    public ref class Categories {
    public:
        property int Id;
        property String^ Name;
        property List<Products^>^ ProductsList;
        Categories() {}
        Categories(int id, String^ name, List<Products^>^ productsList);
    };
}