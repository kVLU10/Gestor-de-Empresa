#pragma once

using namespace System;
using namespace Proyecto;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace SalesController {
	[Serializable]
	public ref class PersonalDB {
	public:
		List <Personal^>^ ListDBP = gcnew List<Personal^>();
		PersonalDB();
	};

	[Serializable]
	public ref class ClientDB {
	public:
		List <Client^>^ ListDBC = gcnew List<Client^>();
		ClientDB();
	};

	[Serializable]
	public ref class ProductDB {
	public:
		List <Products^>^ ListDB = gcnew List<Products^>();
		ProductDB();
	};

	[Serializable]
	public ref class StoreDB {
	public:
		List <Store^>^ ListDB = gcnew List<Store^>();
		StoreDB();
	};

	public ref class DBController
	{
		//Definimos miembros estáticos
		private:
			static ProductDB^ productDB = gcnew ProductDB();
			static PersonalDB^ personalDB = gcnew PersonalDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static ClientDB^ clientDB = gcnew ClientDB();

		public:
			//Permanencia de datos personal
			static void SavePersonal();
			static void LoadPersonal();
			static Personal^ ValidateUser(String^ username, String^ password);
			//Permanencia de datos clientes
			static void SaveClient();
			static void LoadClient();
			//Permanencia de productos
			static void SaveProducts();
			static void LoadProducts();
			//Permanencia de productos
			static void SaveStore();
			static void LoadStore();
			//Productos
			static void AddProduct(Products^);
			static void UpdateProduct(Products^);
			static void DeleteProduct(int productId);
			static List<Products^>^ QueryProducts();
			static Products^ QueryProductById(int productId);
			//Personal
			static void AddPersonal(Personal^);
			static void UpdatePersonal(Personal^);
			static void DeletePersonal(int DocumentNumber);
			static List<Personal^>^ QueryPersonal();
			static Personal^ QueryPersonalByDocumentNumber(int personalDocumentNumber);

			//Stores
			static void AddStore(Store^);
			static void UpdateStore(Store^);
			static void DeleteStore(int storeID);
			static List<Store^>^ QueryStore();
			static Store^ QueryStoreById(int storeID);

			//Clientes
			static void AddClient(Client^);
			static void UpdateClient(Client^);
			static void DeleteClient(int DocumentNumber);
			static List<Client^>^ QueryClient();
			static Client^ QueryClientByDocumentNumber(int clientDocumentNumber);
	};
}

