#include "pch.h"
#include "SalesController.h"

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

Personal^ SalesController::SalesManager::ValidateUser(String^ username, String^ password)
{
	Personal^ personal = nullptr;
	if (username->CompareTo("daquino")==0 && password->CompareTo("password")==0) {
		personal = gcnew Personal(1, "daquino", "password", "Daniel", "Enrique", "Aquino", "Montaño", 'A', 1200, 10, "gmail", "kingston", "12052001");
	}
	return personal;
}
