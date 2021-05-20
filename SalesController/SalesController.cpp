#include "pch.h"
#include "SalesController.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace Proyecto;
using namespace System::Data::SqlClient;

void SalesController::SalesManager::AddProduct(Products^ p)
{
	//AddProduct es un método estático o de clase
	DBController::AddProduct(p);
}

void SalesController::SalesManager::UpdateProduct(Products^ p)
{
	DBController::UpdateProduct(p);
}

void SalesController::SalesManager::DeleteProduct(int productId)
{
	DBController::DeleteProduct(productId);
}

List<Products^>^ SalesController::SalesManager::QueryProducts()
{
	return DBController::QueryProducts();
}

Products^ SalesController::SalesManager::QueryProductById(int productId)
{
	return DBController::QueryProductById(productId);
}

void SalesController::SalesManager::AddPersonal(Personal^ ps)
{
	//Addpersdonal es un metodo estatico o de clase
	DBController::AddPersonal(ps);
}

void SalesController::SalesManager::UpdatePersonal(Personal^ ps)
{
	DBController::UpdatePersonal(ps);
}

void SalesController::SalesManager::DeletePersonal(int DocumentNumber)
{
	DBController::DeletePersonal(DocumentNumber);
}

List<Personal^>^ SalesController::SalesManager::QueryPersonal()
{
	return DBController::QueryPersonal();
}

Personal^ SalesController::SalesManager::QueryPersonalByDocumentNumber(int personalDocumentNumber)
{
	return DBController::QueryPersonalByDocumentNumber(personalDocumentNumber);
}


void SalesController::SalesManager::AddStore(Store^store)
{
	DBController::AddStore(store);
}

void SalesController::SalesManager::UpdateStore(Store^store)
{
	DBController::UpdateStore(store);
}

void SalesController::SalesManager::DeleteStore(int ID)
{
	DBController::DeleteStore(ID);
}

List<Store^>^ SalesController::SalesManager::QueryStore()
{
	return DBController::QueryStore();
}

Store^ SalesController::SalesManager::QueryStoreByDocumentNumber(String^ personalDocumentNumber)
{
	throw gcnew System::NotImplementedException();
}
	// TODO: Insertar una instrucción "return" aquí

void SalesController::SalesManager::AddClient(Client^ c)
{
	DBController::AddClient(c);
}

void SalesController::SalesManager::UpdateClient(Client^ c)
{
	DBController::UpdateClient(c);
}

void SalesController::SalesManager::DeleteClient(int DocumentNumber)
{
	DBController::DeleteClient(DocumentNumber);
}

List<Client^>^ SalesController::SalesManager::QueryClient()
{
	return DBController::QueryClient();
}

Client^ SalesController::SalesManager::QueryClientByDocumentNumber(int clientDocumentNumber)
{
	return DBController::QueryClientByDocumentNumber(clientDocumentNumber);
}

Personal^ SalesController::SalesManager::ValidateUser(String^ username, String^ password)
{
	/*
	Personal^ personal = nullptr;
	if (username->CompareTo("daquino")==0 && password->CompareTo("password")==0) {
		personal = gcnew Personal(1, "daquino", "password", "Daniel", "Enrique", "Aquino", "Montaño", 'A', 1200, 10, "gmail", "kingston", "12052001");
	}
	return personal;*/
	return DBController::ValidateUser(username, password);
}
