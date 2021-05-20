#include "pch.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;


SalesController::PersonalDB::PersonalDB() {
}

SalesController::ClientDB::ClientDB() {
}

void SalesController::DBController::SavePersonal()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(PersonalDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("personal.xml");
    writer->Serialize(file, personalDB);
    file->Close();
}

void SalesController::DBController::LoadPersonal()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(PersonalDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("personal.xml");
        personalDB = (PersonalDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

Personal^ SalesController::DBController::ValidateUser(String^ username, String^ password) {
    Personal^ personal = nullptr;
    for (int i = 0; i < personalDB->ListDBP->Count; i++) {
        if (personalDB->ListDBP[i]->Username->Equals(username) &&
            personalDB->ListDBP[i]->Password->Equals(password))
            return personalDB->ListDBP[i];
    }
    return personal;
}

void SalesController::DBController::SaveClient()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(ClientDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("client.xml");
    writer->Serialize(file, clientDB);
    file->Close();
}

void SalesController::DBController::LoadClient()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(ClientDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("client.xml");
        clientDB = (ClientDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

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
    SavePersonal();
}

void SalesController::DBController::UpdatePersonal(Personal^ personal)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->Id == personal->Id) {
            personalDB->ListDBP[i] = personal;
        }  
    SavePersonal();
}

void SalesController::DBController::DeletePersonal(int DocumentNumber)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++) {
        if (personalDB->ListDBP[i]->Id == DocumentNumber)
            personalDB->ListDBP->RemoveAt(i);
    }
    SavePersonal();
}

List<Personal^>^ SalesController::DBController::QueryPersonal()
{
    LoadPersonal();
    return personalDB->ListDBP;
}

Personal^ SalesController::DBController::QueryPersonalByDocumentNumber(int personalDocumentNumber)
{
    LoadPersonal();
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->Id == personalDocumentNumber)
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
        }
}

void SalesController::DBController::AddClient(Client^ client)
{
    clientDB->ListDBC->Add(client);
    SaveClient();
}

void SalesController::DBController::UpdateClient(Client^ client)
{
    for (int i = 0; i < clientDB->ListDBC->Count; i++)
        if (clientDB->ListDBC[i]->Id == client->Id) {
            clientDB->ListDBC[i] = client;
        }
    SaveClient();
}

void SalesController::DBController::DeleteStore(int storeID)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == storeID) {
            storeDB->ListDB[i]->Status = "Inhabilitado";

        }
}

void SalesController::DBController::DeleteClient(int DocumentNumber)
{
    for (int i = 0; i < clientDB->ListDBC->Count; i++) {
        if (clientDB->ListDBC[i]->Id == DocumentNumber)
            clientDB->ListDBC->RemoveAt(i);
    }
    SaveClient();
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


List<Client^>^ SalesController::DBController::QueryClient()
{
    LoadClient();
    return clientDB->ListDBC;
}

Client^ SalesController::DBController::QueryClientByDocumentNumber(int clientDocumentNumber)
{
    LoadClient();
    for (int i = 0; i < clientDB->ListDBC->Count; i++)
        if (clientDB->ListDBC[i]->Id == clientDocumentNumber)
            return clientDB->ListDBC[i];
    return nullptr;
}