/**
 * Project SalesSolution
 */

#pragma once

using namespace System;

namespace Proyecto {
    public ref class Store {
    public:
        property int Id;
        property String^ Name;
        property String^ Adress;
        property String^ Status;
        Store() {}
        Store(String^ name,int id,String^adress,String^status);

    };
}
