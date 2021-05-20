#pragma once
#include "DBController.h"

using namespace System;
using namespace Proyecto;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class SalesManager
	{
		public:
			//Métodos CRUD para Productos
			static void AddProduct(Products^);
			static void UpdateProduct(Products^);
			static void DeleteProduct(int productId);
			static List<Products^>^ QueryProducts();
			static Products^ QueryProductById(int productId);

			//Métodos CRUD para Personal
			static void AddPersonal(Personal^);
			static void UpdatePersonal(Personal^);
			static void DeletePersonal(String^ DoumentNumber);
			static List<Personal^>^ QueryPersonal();
			static Personal^ QueryPersonalByDocumentNumber(String^ personalDocumentNumber);

			//Méstodos CRUD para Store

			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(String^ DocumentNumber);
			static List<Store^>^ QueryStore();
			static Store^ QueryStoreByDocumentNumber(String^ personalDocumentNumber);

			//Métodos para la autenticación
			static Personal^ ValidateUser(String^ username, String^ password);
	};
}
