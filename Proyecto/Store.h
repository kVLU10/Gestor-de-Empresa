/**
 * Project SalesSolution
 */
#include "Products.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Proyecto {
    [Serializable]
    public ref class Store {
    public:
        property int Id;
        property String^ Name;
        property String^ Adress;
        property String^ Status;
        property List<Products^>^ ProductsList;
        Store() {}
        Store(String^ name,int id,String^adress,String^status, List<Products^>^ ProductsList);

    };
}
