#pragma once
#include "ProductDB.h"
#include "PersonalDB.h"

using namespace Proyecto;
using namespace System::Collections::Generic;

namespace SalesController {
	public ref class DBController
	{
		//Definimos miembros estáticos
		private:
			static ProductDB^ productDB = gcnew ProductDB();
			static PersonalDB^ personalDB = gcnew PersonalDB();

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
	};
}

