#include "ComboBoxIdItem.h"
#pragma once

namespace SalesView {
	using namespace Proyecto;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductSearch2Form
	/// </summary>
	public ref class ProductSearch2Form : public System::Windows::Forms::Form
	{
	private: Form^ refForm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;
		   List<Products^>^ productList = gcnew List<Products^>();

	public:
		ProductSearch2Form(Form^ owner)
		{
			InitializeComponent();
			LoadCmbCategoria();
			//
			//TODO: agregar código de constructor aquí
			//
			this->refForm = owner;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductSearch2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbProducts;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::DataGridView^ dgvProducts;
	//private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	//private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	//private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	//private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbProducts = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Producto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Categoria";
			// 
			// cmbProducts
			// 
			this->cmbProducts->FormattingEnabled = true;
			this->cmbProducts->Location = System::Drawing::Point(74, 53);
			this->cmbProducts->Name = L"cmbProducts";
			this->cmbProducts->Size = System::Drawing::Size(121, 21);
			this->cmbProducts->TabIndex = 19;
			this->cmbProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductSearch2Form::cmbProducts_SelectedIndexChanged);
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Location = System::Drawing::Point(64, 12);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(121, 21);
			this->cmbCategoria->TabIndex = 18;
			this->cmbCategoria->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductSearch2Form::cmbCategoria_SelectedIndexChanged);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->name,
					this->price, this->stock
			});
			this->dgvProducts->Location = System::Drawing::Point(12, 195);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(457, 167);
			this->dgvProducts->TabIndex = 22;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearch2Form::dgvProducts_CellClick);
			this->dgvProducts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearch2Form::dgvProducts_CellContentClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Código";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 50;
			// 
			// name
			// 
			this->name->HeaderText = L"Descripción";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 210;
			// 
			// price
			// 
			this->price->HeaderText = L"Precio";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			this->price->Width = 70;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			this->stock->ReadOnly = true;
			this->stock->Width = 70;
			// 
			// ProductSearch2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 384);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbProducts);
			this->Controls->Add(this->cmbCategoria);
			this->Name = L"ProductSearch2Form";
			this->Text = L"ProductSearch2Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dgvProducts_CellClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e);
	
private: System::Void cmbCategoria_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	cmbProducts->Items->Clear();
	cmbProducts->Text = ("Seleccione una producto");
	int cateId = ((ComboBoxIdItem^)cmbCategoria->Items[cmbCategoria->SelectedIndex])->Value;
	Categories^ c = SalesManager::QueryCategoriesById(cateId);
	if (c != nullptr && c->ProductsList != nullptr)
	{
		for (int i = 0; i < c->ProductsList->Count; i++)
		{
			Products^ pl = c->ProductsList[i];
			cmbProducts->Items->Add(gcnew ComboBoxIdItem(pl->Name, pl->Id));
		}
	}

}
	private: System::Void cmbProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		dgvProducts->Rows->Clear();
		int cateId = ((ComboBoxIdItem^)cmbCategoria->Items[cmbCategoria->SelectedIndex])->Value;
		Categories^ c = SalesManager::QueryCategoriesById(cateId);
		int productId = ((ComboBoxIdItem^)cmbProducts->Items[cmbProducts->SelectedIndex])->Value;
		int proid = 99999;
		//txtProductId->Text = ""+ cateId;
		if (c != nullptr && c->ProductsList != nullptr)
		{
			//txtProductId->Text = "2";
			for (int i = 0; i < c->ProductsList->Count; i++)
			{
				//txtProductId->Text = "3";
				Products^ pl = c->ProductsList[i];
				proid = pl->Id;
				//txtProductId->Text = "" + proid;
				if (proid == productId)
				{
					this->dgvProducts->Rows->Add(gcnew array<String^>{
						"" + pl->Id,
							pl->Name,
							pl->Marca,
							"" + pl->BonusPoints,
							//	pl->Description,
								//	pl->Description,
						//		"" + pl->Precio,
							//	pl->Status,
					});
					productList->Clear();
					productList->Add(pl);
				}
			}
		}
	}
	public: System::Void AddProductToDetails(Products^ p)
	{
		   if (p != nullptr) {

			   String^ desc;
			   desc = p->Name;

			   this->dgvProducts->Rows->Add(gcnew array<String^>{
				   "" + p->Id,

			   });
			   //	double total = 0;
				   //for (int i = 0; i < dgvStore->RowCount - 1; i++)
					   //total += Double::Parse(dgvStore->Rows[i]->Cells[3]->Value->ToString());
				   //txtTotal->Text = "" + total;
		   }
	   }
		   public: void LoadCmbCategoria() {
			   cmbCategoria->Items->Clear();
			   cmbCategoria->Text = ("Seleccione una categoria");
			   // cmbCategories->Items->Add("Seleccione una categoria");
			   List<Categories^>^ managerList = SalesManager::QueryCategories();
			   for (int i = 0; i < managerList->Count; i++) {
				   cmbCategoria->Items->Add(gcnew ComboBoxIdItem(managerList[i]->Name, managerList[i]->Id));
			   }
		   }
	 
private: System::Void dgvProducts_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
