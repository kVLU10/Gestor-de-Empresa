#pragma once
#include "DBController.h"

using namespace System;
using namespace Proyecto;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class SalesManager
	{
	public:

		//Métodos CRUD para Asistencia
		static List<Asistencia^>^ QueryAsistencia();
		static void AddAsistencia(Asistencia^);

		//Métodos CRUD para Categories
		static void AddCategories(Categories^);
		static void UpdateCategories(Categories^);
		static void DeleteCategories(int categoriesId);
		static List<Categories^>^ QueryCategories();
		static Categories^ QueryCategoriesById(int categoriesId);

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
			static void DeleteStore(int ID);
			static List<Store^>^ QueryStore();
			static Store^ QueryStoreByDocumentNumber(int storeID);

			//Métodos CRUD para Clientes
			static void AddClient(Client^);
			static void UpdateClient(Client^);
			static void DeleteClient(String^ DocumentNumber);
			static List<Client^>^ QueryClient();
			static Client^ QueryClientByDocumentNumber(String^ clientDocumentNumber);

			//Distritos
			static void AddDistrit(Distrit^);
			static List<Distrit^>^ QueryDistrit();

			//Métodos para la autenticación
			static Person^ ValidateUser(String^ username, String^ password);

			/*Sale*/
			static void RegisterSale(Sale^);
	};
}
