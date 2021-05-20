#include "pch.h"
#include "DBController.h"

//Con -> se accede a miembros de una clase (m�todos o atributos)

void SalesController::DBController::AddProduct(Products^ product)
{
    productDB->ListDB->Add(product);
}

void SalesController::DBController::UpdateProduct(Products^ product)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == product->Id) {
            productDB->ListDB[i] = product;
            return;
        }
}

void SalesController::DBController::DeleteProduct(int productId)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId) {
            productDB->ListDB[i]->Status = "Inhabilitado";
            return;
        }
}

List<Products^>^ SalesController::DBController::QueryProducts()
{
    return productDB->ListDB;
}

Products^ SalesController::DBController::QueryProductById(int productId)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId)
            return productDB->ListDB[i];
    return nullptr;
}

void SalesController::DBController::AddPersonal(Personal^ personal)
{
    personalDB->ListDBP->Add(personal);
}

void SalesController::DBController::UpdatePersonal(Personal^ personal)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->DocumentNumber == personal->DocumentNumber) {
            personalDB->ListDBP[i] = personal;
            return;
        }         
}

void SalesController::DBController::DeletePersonal(String^ DocumentNumber)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->DocumentNumber == DocumentNumber) {
            personalDB->ListDBP[i]->Status = 'I';
            return;
        }
}

List<Personal^>^ SalesController::DBController::QueryPersonal()
{
    return personalDB->ListDBP;
}

Personal^ SalesController::DBController::QueryPersonalByDocumentNumber(String^ personalDocumentNumber)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->DocumentNumber == personalDocumentNumber)
            return personalDB->ListDBP[i];
    return nullptr;
}



void SalesController::DBController::AddStore(Store^ store)
{
    storeDB->ListDB->Add(store);
}

void SalesController::DBController::UpdateStore(Store^ store)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == store->Id) {
            storeDB->ListDB[i] = store;
            return;
        }
}

void SalesController::DBController::DeleteStore(int storeID)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == storeID) {
            storeDB->ListDB[i]->Status = "Inhabilitado";
            return;
        }
}

List<Store^>^ SalesController::DBController::QueryStore()
{
    return storeDB->ListDB;
}

Store^ SalesController::DBController::QueryStoreById(int storeID)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == storeID) {
            return storeDB->ListDB[i];
        }
    return nullptr;
}

