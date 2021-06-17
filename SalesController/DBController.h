#pragma once

using namespace System;
using namespace Proyecto;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace SalesController {
	[Serializable]
	public ref class AsistenciaDB {
	public:
		List <Asistencia^>^ ListDB = gcnew List<Asistencia^>();
		AsistenciaDB();
	};

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
	public ref class CategoriesDB {
	public:
		List <Categories^>^ ListDB = gcnew List<Categories^>();
		CategoriesDB();
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

	[Serializable]
	public ref class DistritDB {
	public:
		List <Distrit^>^ ListDB = gcnew List<Distrit^>();
		DistritDB();
	};

	[Serializable]
	public ref class SaleDB {
	public:
		List<Sale^>^ ListDBSale = gcnew List<Sale^>();
		void Persist();
		SaleDB();
	};

	public ref class DBController
	{
		//Definimos miembros estáticos
		private:
			static AsistenciaDB^ asistenciaDB = gcnew AsistenciaDB();
			static CategoriesDB^ categoriesDB = gcnew CategoriesDB();
			static ProductDB^ productDB = gcnew ProductDB();
			static PersonalDB^ personalDB = gcnew PersonalDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static ClientDB^ clientDB = gcnew ClientDB();
			static DistritDB^ distritDB = gcnew DistritDB();
			static SaleDB^ saleDB = gcnew SaleDB();

		public:
			//Permanencia de datos Asistencia
			static void SaveAsistencia();
			static void LoadAsistencia();
			//Permanencia de datos personal
			static void SavePersonal();
			static void LoadPersonal();
			static Personal^ ValidateUser(String^ username, String^ password);
			//Permanencia de datos categorias
			static void SaveCategories();
			static void LoadCategories();
			//Permanencia de datos clientes
			static void SaveClient();
			static void LoadClient();
			//Permanencia de productos
			static void SaveProducts();
			static void LoadProducts();
			//Permanencia de store
			static void SaveStore();
			static void LoadStore();
			//Permanencia departamentos
			static void SaveDistrit();
			static void LoadDistrit();
			//Asistencia
			static List<Asistencia^>^ QueryAsistencia();
			static void AddAsistencia(Asistencia^);
			//categorias
			static void AddCategories(Categories^);
			static void UpdateCategories(Categories^);
			static void DeleteCategories(int productId);
			static List<Categories^>^ QueryCategories();
			static Categories^ QueryCategoriesById(int productId);
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
			static Store^ QueryStoreByDocumentNumber(int storeID);

			//Clientes
			static void AddClient(Client^);
			static void UpdateClient(Client^);
			static void DeleteClient(int DocumentNumber);
			static List<Client^>^ QueryClient();
			static Client^ QueryClientByDocumentNumber(int clientDocumentNumber);

			//Departamentos
			static void AddDistrit(Distrit^);
			static List<Distrit^>^ QueryDistrit();

			/* Sale */
			static void RegisterSale(Sale^);
	};
}

