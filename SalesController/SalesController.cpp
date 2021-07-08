#include "pch.h"
#include "SalesController.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace Proyecto;
using namespace System::Data::SqlClient;

void SalesController::SalesManager::AddDistrit(Distrit^ d)
{
	//AddProduct es un método estático o de clase
	DBController::AddDistrit(d);
}

List<Distrit^>^ SalesController::SalesManager::QueryDistrit()
{
	return DBController::QueryDistrit();
}

void SalesController::SalesManager::AddCategories(Categories^ c)
{
	//AddProduct es un método estático o de clase
	DBController::AddCategories(c);
}

void SalesController::SalesManager::UpdateCategories(Categories^ c)
{
	DBController::UpdateCategories(c);
}

void SalesController::SalesManager::DeleteCategories(int categoriesId)
{
	DBController::DeleteCategories(categoriesId);
}

List<Categories^>^ SalesController::SalesManager::QueryCategories()
{
	return DBController::QueryCategories();
}

List<Asistencia^>^ SalesController::SalesManager::QueryAsistencia()
{
	return DBController::QueryAsistencia();
}

void SalesController::SalesManager::AddAsistencia(Asistencia^ a)
{
	DBController::AddAsistencia(a);
}

Categories^ SalesController::SalesManager::QueryCategoriesById(int categoriesId)
{
	return DBController::QueryCategoriesById(categoriesId);
}

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

void SalesController::SalesManager::DeletePersonal(String^ DocumentNumber)
{
	DBController::DeletePersonal(DocumentNumber);
}

List<Personal^>^ SalesController::SalesManager::QueryPersonal()
{
	return DBController::QueryPersonal();
}

Personal^ SalesController::SalesManager::QueryPersonalByDocumentNumber(String^ personalDocumentNumber)
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

Store^ SalesController::SalesManager::QueryStoreByDocumentNumber(int storeID)
{
	return DBController::QueryStoreByDocumentNumber(storeID);
	// TODO: Insertar una instrucción "return" aquí
}

void SalesController::SalesManager::AddClient(Client^ c)
{
	DBController::AddClient(c);
}

void SalesController::SalesManager::UpdateClient(Client^ c)
{
	DBController::UpdateClient(c);
}

void SalesController::SalesManager::DeleteClient(String^ DocumentNumber)
{
	DBController::DeleteClient(DocumentNumber);
}

List<Client^>^ SalesController::SalesManager::QueryClient()
{
	return DBController::QueryClient();
}

Client^ SalesController::SalesManager::QueryClientByDocumentNumber(String^ clientDocumentNumber)
{
	return DBController::QueryClientByDocumentNumber(clientDocumentNumber);
}

void SalesController::SalesManager::RegisterSale(Sale^ sale)
{
	DBController::RegisterSale(sale);
}


Person^ SalesController::SalesManager::ValidateUser(String^ username, String^ password)
{
	/*
	Personal^ personal = nullptr;
	if (username->CompareTo("jdavila")==0 && password->CompareTo("password")==0) {
		personal = gcnew Personal("jdavila", "password");
	}
	return personal;
	*/
	return DBController::ValidateUser(username, password);
}
