/**
 * Project SalesSolution
 */

#pragma once

using namespace System;

namespace Proyecto {
    public ref class Categories {
    public:
        property int Id;
        property String^ Name;
        property String^ ProductList;
        Categories() {}
        Categories(int id, String^ name, String^ productList);
    };
}