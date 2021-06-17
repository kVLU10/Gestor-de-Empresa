#pragma once
//#include "SaleForm.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Proyecto;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
	private: Form^ refForm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;




		   List<Products^>^ productList = gcnew List<Products^>();
	public:
		ProductSearchForm(Form^ owner)
		{
			InitializeComponent();
			RefreshDGVProducts();
			//
			//TODO: agregar código de constructor aquí
			//
			this->refForm = owner;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::DataGridView^ dgvProducts;
	private: System::Windows::Forms::Button^ btnProductSearch;





	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ txtDescription;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->btnProductSearch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(135, 16);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(80, 20);
			this->txtProductId->TabIndex = 1;
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->name,
					this->price, this->stock
			});
			this->dgvProducts->Location = System::Drawing::Point(12, 84);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(457, 167);
			this->dgvProducts->TabIndex = 2;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvProducts_CellClick);
			// 
			// btnProductSearch
			// 
			this->btnProductSearch->Location = System::Drawing::Point(270, 13);
			this->btnProductSearch->Name = L"btnProductSearch";
			this->btnProductSearch->Size = System::Drawing::Size(165, 23);
			this->btnProductSearch->TabIndex = 3;
			this->btnProductSearch->Text = L"Buscar producto";
			this->btnProductSearch->UseVisualStyleBackColor = true;
			this->btnProductSearch->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnProductSearch_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Descripción";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(135, 46);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(300, 20);
			this->txtDescription->TabIndex = 7;
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
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 264);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnProductSearch);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->label1);
			this->Name = L"ProductSearchForm";
			this->Text = L"Búsqueda de productos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnProductSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtProductId->Text != "") {
			try {
				int productId = Int32::Parse(txtProductId->Text);
				Products^ p = SalesManager::QueryProductById(productId);
				if (p != nullptr) {
					String^ name = "";
					dgvProducts->Rows->Clear();
					dgvProducts->Rows->Add(gcnew array<String^>{
							"" + p->Id,
							name,
							"" + p->Precio,
					}
					);
					productList->Clear();
					productList->Add(p);
				}
				else {
					MessageBox::Show("El producto no existe.");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error en la búsqueda.");
			}
		}
	}
	public: void AddProductToDetails(Products^ p) {
			   if (p != nullptr) {
				   String^ name = "";
				   name = p->Name;
				   this->dgvProducts->Rows->Add(gcnew array<String^>{
					   "" + p->Id,
						   name,
						   "" + p->Precio,
						   "" + 0,
						   "" + 0
				   });
			   }
		   }

	public: void RefreshDGVProducts() {
		List<Products^>^ productList = SalesManager::QueryProducts();
		dgvProducts->Rows->Clear();
		for (int i = 0; i < productList->Count; i++)
			dgvProducts->Rows->Add(gcnew array<String^>{
				"" + productList[i]->Id,
				productList[i]->Name,
				productList[i]->Marca,
				"" + productList[i]->BonusPoints,
				productList[i]->Description,
				"" + productList[i]->Precio,
				productList[i]->Status,
		});
	}

	private: System::Void dgvProducts_CellClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}
