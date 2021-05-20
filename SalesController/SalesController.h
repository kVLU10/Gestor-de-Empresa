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
			static void DeletePersonal(int DoumentNumber);
			static List<Personal^>^ QueryPersonal();
			static Personal^ QueryPersonalByDocumentNumber(int personalDocumentNumber);

			//Métodos CRUD para Clientes
			static void AddClient(Client^);
			static void UpdateClient(Client^);
			static void DeleteClient(String^ DocumentNumber);
			static List<Client^>^ QueryClient();
			static Client^ QueryClientByDocumentNumber(String^ clientDocumentNumber);

			//Métodos para la autenticación
			static Personal^ ValidateUser(String^ username, String^ password);
	};
}
