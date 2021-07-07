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
	private: System::Windows::Forms::TextBox^ tboxid;
	protected:
	private: System::Windows::Forms::Label^ lbStatus;
	private: System::Windows::Forms::ComboBox^ comboBoxStatus;
	private: System::Windows::Forms::DataGridView^ dgvStore;






	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lbNamStore;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ tboxName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbStore;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::Button^ btnAllView;
	private: System::Windows::Forms::Button^ btnClear;
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
			this->tboxid = (gcnew System::Windows::Forms::TextBox());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->dgvStore = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lbNamStore = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tboxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAllView = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStore))->BeginInit();
			this->SuspendLayout();
			// 
			// tboxid
			// 
			this->tboxid->Location = System::Drawing::Point(376, 95);
			this->tboxid->Margin = System::Windows::Forms::Padding(2);
			this->tboxid->Name = L"tboxid";
			this->tboxid->Size = System::Drawing::Size(150, 20);
			this->tboxid->TabIndex = 27;
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Location = System::Drawing::Point(320, 98);
			this->lbStatus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(54, 13);
			this->lbStatus->TabIndex = 26;
			this->lbStatus->Text = L"Categoría";
			this->lbStatus->Click += gcnew System::EventHandler(this, &ProductsStoreForm::lbStatus_Click);
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->FormattingEnabled = true;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Habilitado", L"Desabilitado", L"Repleto" });
			this->comboBoxStatus->Location = System::Drawing::Point(84, 133);
			this->comboBoxStatus->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(150, 21);
			this->comboBoxStatus->TabIndex = 25;
			// 
			// dgvStore
			// 
			this->dgvStore->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStore->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->name,
					this->Category, this->Price, this->Stock
			});
			this->dgvStore->Location = System::Drawing::Point(36, 266);
			this->dgvStore->Margin = System::Windows::Forms::Padding(2);
			this->dgvStore->Name = L"dgvStore";
			this->dgvStore->RowHeadersWidth = 51;
			this->dgvStore->RowTemplate->Height = 24;
			this->dgvStore->Size = System::Drawing::Size(536, 210);
			this->dgvStore->TabIndex = 23;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(307, 221);
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
			this->btnAdd->Location = System::Drawing::Point(129, 221);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(149, 27);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"&Agregar Productos";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnAdd_Click);
			// 
			// lbNamStore
			// 
			this->lbNamStore->AutoSize = true;
			this->lbNamStore->Location = System::Drawing::Point(34, 179);
			this->lbNamStore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbNamStore->Name = L"lbNamStore";
			this->lbNamStore->Size = System::Drawing::Size(35, 13);
			this->lbNamStore->TabIndex = 17;
			this->lbNamStore->Text = L"Stock";
			this->lbNamStore->Click += gcnew System::EventHandler(this, &ProductsStoreForm::lbNamStore_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(376, 136);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 16;
			// 
			// tboxName
			// 
			this->tboxName->Location = System::Drawing::Point(84, 176);
			this->tboxName->Margin = System::Windows::Forms::Padding(2);
			this->tboxName->Name = L"tboxName";
			this->tboxName->Size = System::Drawing::Size(150, 20);
			this->tboxName->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 134);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(336, 136);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Precio";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 96);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Código";
			this->label4->Click += gcnew System::EventHandler(this, &ProductsStoreForm::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 93);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 32;
			// 
			// btnAllView
			// 
			this->btnAllView->Location = System::Drawing::Point(469, 173);
			this->btnAllView->Name = L"btnAllView";
			this->btnAllView->Size = System::Drawing::Size(75, 23);
			this->btnAllView->TabIndex = 34;
			this->btnAllView->Text = L"Mostrar todo";
			this->btnAllView->UseVisualStyleBackColor = true;
			this->btnAllView->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnAllView_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(529, 224);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 35;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnClear_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(281, 484);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(122, 27);
			this->btnCancel->TabIndex = 39;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(129, 483);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(122, 28);
			this->btnSave->TabIndex = 38;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ProductsStoreForm::btnSave_Click);
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
			// ProductsStoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 523);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAllView);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxid);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->dgvStore);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lbNamStore);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tboxName);
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
			 cmbStore->Text = ("Seleccione un almacen");
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
	ProductSearch2Form^ psForm = gcnew ProductSearch2Form(this);
	psForm->ShowDialog();
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
			sp->Precio = Int32::Parse(dgvStore->Rows[i]->Cells[3]->Value->ToString());
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
