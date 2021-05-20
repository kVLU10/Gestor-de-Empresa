#pragma once
#include "ProductDB.h"
#include "PersonalDB.h"
#include "StoreDB.h"
#include "ClientDB.h"

using namespace Proyecto;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class DBController
	{
		//Definimos miembros estáticos
		private:
			static ProductDB^ productDB = gcnew ProductDB();
			static PersonalDB^ personalDB = gcnew PersonalDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static ClientDB^ clientDB = gcnew ClientDB();

		public:
			//Productos
			static void AddProduct(Products^);
			static void UpdateProduct(Products^);
			static void DeleteProduct(int productId);
			static List<Products^>^ QueryProducts();
			static Products^ QueryProductById(int productId);
			//Personal
			static void AddPersonal(Personal^);
			static void UpdatePersonal(Personal^);
			static void DeletePersonal(String^ DocumentNumber);
			static List<Personal^>^ QueryPersonal();
			static Personal^ QueryPersonalByDocumentNumber(String^ personalDocumentNumber);
    
			//Stores
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeID);
			static List<Store^>^ QueryStore();
			static Store^ QueryStoreById(int storeID);


			//Clientes
			static void AddClient(Client^);
			static void UpdateClient(Client^);
			static void DeleteClient(String^ DocumentNumber);
			static List<Client^>^ QueryClient();
			static Client^ QueryClientByDocumentNumber(String^ clientDocumentNumber);
	};
}

