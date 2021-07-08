#pragma once
#include "ProductSearch2Form.h"
#include "ComboBoxIdItem.h"

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
	/// Resumen de ProductsStoreForm
	/// </summary>
	public ref class ProductsStoreForm : public System::Windows::Forms::Form
	{
	public:
		ProductsStoreForm(void)
		{
			InitializeComponent();
			LoadCmbStore();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductsStoreForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::DataGridView^ dgvStore;






	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnAdd;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbStore;










	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;

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
			this->dgvStore = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvStore
			// 
			this->dgvStore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->Category, this->Price, this->Stock
			});
			this->dgvStore->Location = System::Drawing::Point(12, 115);
			this->dgvStore->Margin = System::Windows::Forms::Padding(2);
			this->dgvStore->Name = L"dgvStore";
			this->dgvStore->RowHeadersWidth = 51;
			this->dgvStore->RowTemplate->Height = 24;
			this->dgvStore->Size = System::Drawing::Size(592, 246);
			this->dgvStore->TabIndex = 23;
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->Width = 125;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->Width = 125;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Categoría";
			this->Category->MinimumWidth = 6;
			this->Category->Name = L"Category";
			this->Category->Width = 125;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 6;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 125;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(325, 70);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(149, 27);
			this->btnDelete->TabIndex = 20;
			this->btnDelete->Text = L"&Eliminar Productos";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnDelete_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(105, 70);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(149, 27);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"&Agregar Productos";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnAdd_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(102, 34);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Almacén";
			// 
			// cmbStore
			// 
			this->cmbStore->FormattingEnabled = true;
			this->cmbStore->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Habilitado", L"Desabilitado", L"Repleto" });
			this->cmbStore->Location = System::Drawing::Point(167, 32);
			this->cmbStore->Margin = System::Windows::Forms::Padding(2);
			this->cmbStore->Name = L"cmbStore";
			this->cmbStore->Size = System::Drawing::Size(307, 21);
			this->cmbStore->TabIndex = 31;
			this->cmbStore->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductsStoreForm::cmbStore_SelectedIndexChanged);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(352, 373);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(122, 27);
			this->btnCancel->TabIndex = 39;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(105, 373);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(122, 28);
			this->btnSave->TabIndex = 38;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnSave_Click);
			// 
			// ProductsStoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 413);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvStore);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ProductsStoreForm";
			this->Text = L"ProductsStoreForm";
			this->Load += gcnew System::EventHandler(this, &ProductsStoreForm::ProductsStoreForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 public: void LoadCmbStore()
		 {
			 cmbStore->Items->Clear();
			 cmbStore->Text = ("Seleccione un almacén");
			 // cmbCategories->Items->Add("Seleccione una categoria");
			 List<Store^>^ managerList = SalesManager::QueryStore();
			 for (int i = 0; i < managerList->Count; i++)
			 {
				 cmbStore->Items->Add(gcnew ComboBoxIdItem(managerList[i]->Name, managerList[i]->Id));
			 }
		 }
	private: System::Void lbStatus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ProductsStoreForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbNamStore_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnAllView_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   public: System::Void AddProductToDetails(Products^ p) {
		   if (p != nullptr) {

			   String^ desc;
			   desc = p->Name;

			   this->dgvStore->Rows->Add(gcnew array<String^>{
				   "" + p->Id,
					   p->Name,
					   p->Marca,
					   "" + p->Precio,
					   "" + p->Quantity,
			   });
			   //	double total = 0;
				   //for (int i = 0; i < dgvStore->RowCount - 1; i++)
					   //total += Double::Parse(dgvStore->Rows[i]->Cells[3]->Value->ToString());
				   //txtTotal->Text = "" + total;
		   }
	   }
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ almacen = "";
	String^ estado = "";
	almacen = cmbStore->Text;
	
	if (almacen =="Seleccione un almacén" )
	{
		MessageBox::Show("Debe seleccionar un almacén");
	}
	else 
	{
		
		int storeId = ((ComboBoxIdItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value;
		
		
		//int storeID = Int32::Parse(a);
		Store^ store = SalesManager::QueryStoreByDocumentNumber(storeId);
		estado = store->Status;
		if (estado=="Desabilitado")
		{
			MessageBox::Show("El almacén seleccionado esta desabilitado");
		}
		else 
		{
			ProductSearch2Form^ psForm = gcnew ProductSearch2Form(this);
			psForm->ShowDialog();
		}
	}
}
	   public:
		   void ClearDGVStoreProduct() {
			   dgvStore->Rows->Clear();
		   }
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Store^ s = SalesManager::QueryStoreByDocumentNumber(
			((ComboBoxIdItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
		s->ProductsList = gcnew List<Products^>();
		for (int i = 0; i < dgvStore->Rows->Count - 1; i++) {
			Products^ sp = gcnew Products();
			sp->Id = Int32::Parse(dgvStore->Rows[i]->Cells[0]->Value->ToString());
			sp->Name = (dgvStore->Rows[i]->Cells[1]->Value->ToString());
			sp->Marca = (dgvStore->Rows[i]->Cells[2]->Value->ToString());
			sp->Precio = Double::Parse(dgvStore->Rows[i]->Cells[3]->Value->ToString());
			sp->Quantity = Int32::Parse(dgvStore->Rows[i]->Cells[4]->Value->ToString());

			s->ProductsList->Add(sp);
		}
		SalesManager::UpdateStore(s);
		MessageBox::Show("Se asignaron los productos a la tienda de manera exitosa.");

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Hubo un error al grabar. Notifique al área de tecnología.");
		return;
	}
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRows = dgvStore->SelectedRows->Count;
	if (selectedRows == 1) {
		dgvStore->Rows->RemoveAt(dgvStore->SelectedRows[0]->Index);
	}
	else {
		MessageBox::Show("Para eliminar un producto debe seleccionar todo el registro");
	}
}
private: System::Void cmbStore_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	ClearDGVStoreProduct();
	int storeId = ((ComboBoxIdItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value;
	Store^ store = SalesManager::QueryStoreByDocumentNumber(storeId);
	if (store != nullptr && store->ProductsList != nullptr) {
		String^ name;
		for (int i = 0; i < store->ProductsList->Count; i++) {
			Products^ sp = store->ProductsList[i];
			this->dgvStore->Rows->Add(gcnew array<String^>{
				"" + sp->Id,
					sp->Name,
					sp->Marca,
					"" + sp->Precio,
					"" + sp->Quantity,

			});
		}
	}
}
};
}
