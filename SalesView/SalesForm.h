#pragma once
#include "ProductSearchForm.h"
#include "ComboBoxItem1.h"
#include "ComboBoxItem.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Proyecto;
	using namespace SalesController;


	/// <summary>
	/// Resumen de SalesForm
	/// </summary>
	public ref class SalesForm : public System::Windows::Forms::Form
	{
	public:
		SalesForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbClient;
	private: System::Windows::Forms::ComboBox^ cmbStore;
	private: System::Windows::Forms::ComboBox^ cmbPersonal;
	private: System::Windows::Forms::DataGridView^ dgvDetails;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Button^ btnRegisterSale;

	private: System::Windows::Forms::Label^ Total;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnDeleteProduct;


	private: System::Windows::Forms::DateTimePicker^ dtpSaleDate;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbClient = (gcnew System::Windows::Forms::ComboBox());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->cmbPersonal = (gcnew System::Windows::Forms::ComboBox());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->dtpSaleDate = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cliente:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tienda:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Vendedor:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fecha:";
			// 
			// cmbClient
			// 
			this->cmbClient->FormattingEnabled = true;
			this->cmbClient->Location = System::Drawing::Point(83, 59);
			this->cmbClient->Name = L"cmbClient";
			this->cmbClient->Size = System::Drawing::Size(302, 21);
			this->cmbClient->TabIndex = 4;
			// 
			// cmbStore
			// 
			this->cmbStore->FormattingEnabled = true;
			this->cmbStore->Location = System::Drawing::Point(83, 96);
			this->cmbStore->Name = L"cmbStore";
			this->cmbStore->Size = System::Drawing::Size(302, 21);
			this->cmbStore->TabIndex = 5;
			// 
			// cmbPersonal
			// 
			this->cmbPersonal->FormattingEnabled = true;
			this->cmbPersonal->Location = System::Drawing::Point(83, 134);
			this->cmbPersonal->Name = L"cmbPersonal";
			this->cmbPersonal->Size = System::Drawing::Size(302, 21);
			this->cmbPersonal->TabIndex = 6;
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Name,
					this->Price, this->Quantity, this->SubTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(16, 251);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->Size = System::Drawing::Size(434, 150);
			this->dgvDetails->TabIndex = 7;
			this->dgvDetails->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SalesForm::dgvDetails_CellValueChanged);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			// 
			// Price
			// 
			this->Price->HeaderText = L"P.U. (S/.)";
			this->Price->Name = L"Price";
			this->Price->Width = 50;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 70;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"Subtotal";
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Width = 70;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(16, 433);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(119, 23);
			this->btnRegisterSale->TabIndex = 8;
			this->btnRegisterSale->Text = L"Registrar Venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &SalesForm::btnRegisterSale_Click);
			// 
			// Total
			// 
			this->Total->AutoSize = true;
			this->Total->Location = System::Drawing::Point(273, 433);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(52, 13);
			this->Total->TabIndex = 9;
			this->Total->Text = L"Total: S/.";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(331, 433);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(66, 20);
			this->txtTotal->TabIndex = 10;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(58, 211);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(130, 23);
			this->btnAddProduct->TabIndex = 11;
			this->btnAddProduct->Text = L"Agregar Producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &SalesForm::btnAdd_Click);
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->Location = System::Drawing::Point(276, 211);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(130, 23);
			this->btnDeleteProduct->TabIndex = 12;
			this->btnDeleteProduct->Text = L"Eliminar Producto";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			this->btnDeleteProduct->Click += gcnew System::EventHandler(this, &SalesForm::btnDelete_Click);
			// 
			// dtpSaleDate
			// 
			this->dtpSaleDate->Location = System::Drawing::Point(83, 168);
			this->dtpSaleDate->Name = L"dtpSaleDate";
			this->dtpSaleDate->Size = System::Drawing::Size(302, 20);
			this->dtpSaleDate->TabIndex = 13;
			// 
			// SalesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 490);
			this->Controls->Add(this->dtpSaleDate);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->Total);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->cmbPersonal);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->cmbClient);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Text = L"Registro de Venta";
			this->Load += gcnew System::EventHandler(this, &SalesForm::SalesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductSearchForm^ psForm = gcnew ProductSearchForm(this);
		psForm->ShowDialog();
	}

	void AddCmbClient() {
		cmbClient->Items->Clear();
			List <Client^>^ clientList = SalesManager::QueryClient();
			for (int i = 0; i < clientList->Count; i++) {
				cmbClient->Items->Add(gcnew ComboBoxItem1(clientList[i]->FirstName + " " + clientList[i]->FirstLastName, clientList[i]->DocumentNumber));
			}
	}

	void AddCmbStores() {
		cmbStore->Items->Clear();
		List <Store^>^ storeList = SalesManager::QueryStore();
		for (int i = 0; i < storeList->Count; i++) {
			cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name));
		}
	}

	void AddCmbPersonal() {
		cmbPersonal->Items->Clear();
		List <Personal^>^ personalList = SalesManager::QueryPersonal();
		for (int i = 0; i < personalList->Count; i++) {
			cmbPersonal->Items->Add(gcnew ComboBoxItem1(personalList[i]->FirstName + " " + personalList[i]->FirstLastName, personalList[i]->DocumentNumber));
		}
	}

	void DisableControls() {
		btnAddProduct->Enabled = false;
		btnDeleteProduct->Enabled = false;
		btnRegisterSale->Enabled = false;
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int selectedRows = dgvDetails->SelectedRows->Count;
		if (selectedRows == 1) {
			dgvDetails->Rows->RemoveAt(dgvDetails->SelectedRows[0]->Index);
		}
		else {
			MessageBox::Show("Para eliminar un producto debe seleccionar todo el registro");
		}
	}

	public: System::Void AddProductToDetails(Products^ p) {
		if (p != nullptr) {

			String^ desc;
			desc = p->Name;

			this->dgvDetails->Rows->Add(gcnew array<String^>{
					"" + p->Id,
					desc,
					"" + p->Precio,
					"1",
					"" + p->Precio
			});
			double total = 0;
			for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			txtTotal->Text = "" + total;
		}
	}
	private: System::Void dgvDetails_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvDetails->Columns[e->ColumnIndex]->Name == "quantity") {
			if (dgvDetails->CurrentCell != nullptr &&
				dgvDetails->CurrentCell->Value != nullptr &&
				dgvDetails->CurrentCell->Value->ToString() != "") {
				dgvDetails->Rows[e->RowIndex]->Cells[4]->Value =
					Int32::Parse(dgvDetails->CurrentCell->Value->ToString())
					* Double::Parse(dgvDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
				double total = 0;
				for (int i = 0; i < dgvDetails->RowCount - 1; i++)
					total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
				txtTotal->Text = "" + total;
			}
		}
	}

	 int ValidarDatos();

	private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void SalesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		AddCmbClient();
		AddCmbStores();
		AddCmbPersonal();
	}
};
}
