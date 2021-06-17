#pragma once
#include "ProductsStoreForm.h"	

using namespace Proyecto;
using namespace SalesController;
using namespace System::Collections::Generic;

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de StoreForm
	/// </summary>
	public ref class StoreForm : public System::Windows::Forms::Form
	{
	public:
		StoreForm(void)
		{
			InitializeComponent();
			RefreshDGVStores();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StoreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tboxName;
	private: System::Windows::Forms::TextBox^ tboxDistrit;

	protected:

	protected:

	private: System::Windows::Forms::Label^ lbNamStore;
	private: System::Windows::Forms::Label^ LbDistrit;





	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnAddP;






	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnSearch;





	private: System::Windows::Forms::ComboBox^ comboBoxStatus;

	private: System::Windows::Forms::Label^ lbStatus;
	private: System::Windows::Forms::TextBox^ tboxid;

	private: System::Windows::Forms::Label^ lbId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameStore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ distrit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;
	private: System::Windows::Forms::Button^ btnAllView;

	private: System::Windows::Forms::Button^ btnClear;


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
			this->tboxName = (gcnew System::Windows::Forms::TextBox());
			this->tboxDistrit = (gcnew System::Windows::Forms::TextBox());
			this->lbNamStore = (gcnew System::Windows::Forms::Label());
			this->LbDistrit = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddP = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameStore = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->distrit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->tboxid = (gcnew System::Windows::Forms::TextBox());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->btnAllView = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tboxName
			// 
			this->tboxName->Location = System::Drawing::Point(72, 92);
			this->tboxName->Margin = System::Windows::Forms::Padding(2);
			this->tboxName->Name = L"tboxName";
			this->tboxName->Size = System::Drawing::Size(291, 20);
			this->tboxName->TabIndex = 0;
			this->tboxName->TextChanged += gcnew System::EventHandler(this, &StoreForm::tboxName_TextChanged);
			// 
			// tboxDistrit
			// 
			this->tboxDistrit->Location = System::Drawing::Point(72, 132);
			this->tboxDistrit->Margin = System::Windows::Forms::Padding(2);
			this->tboxDistrit->Name = L"tboxDistrit";
			this->tboxDistrit->Size = System::Drawing::Size(291, 20);
			this->tboxDistrit->TabIndex = 1;
			// 
			// lbNamStore
			// 
			this->lbNamStore->AutoSize = true;
			this->lbNamStore->Location = System::Drawing::Point(22, 94);
			this->lbNamStore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbNamStore->Name = L"lbNamStore";
			this->lbNamStore->Size = System::Drawing::Size(44, 13);
			this->lbNamStore->TabIndex = 3;
			this->lbNamStore->Text = L"Nombre";
			this->lbNamStore->Click += gcnew System::EventHandler(this, &StoreForm::label1_Click);
			// 
			// LbDistrit
			// 
			this->LbDistrit->AutoSize = true;
			this->LbDistrit->Location = System::Drawing::Point(22, 132);
			this->LbDistrit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LbDistrit->Name = L"LbDistrit";
			this->LbDistrit->Size = System::Drawing::Size(39, 13);
			this->LbDistrit->TabIndex = 4;
			this->LbDistrit->Text = L"Distrito";
			this->LbDistrit->Click += gcnew System::EventHandler(this, &StoreForm::label2_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(24, 180);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(88, 27);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StoreForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(124, 180);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(88, 27);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StoreForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(224, 180);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(88, 27);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &StoreForm::btnDelete_Click);
			// 
			// btnAddP
			// 
			this->btnAddP->Location = System::Drawing::Point(480, 180);
			this->btnAddP->Margin = System::Windows::Forms::Padding(2);
			this->btnAddP->Name = L"btnAddP";
			this->btnAddP->Size = System::Drawing::Size(137, 27);
			this->btnAddP->TabIndex = 8;
			this->btnAddP->Text = L"Agregar Productos";
			this->btnAddP->UseVisualStyleBackColor = true;
			this->btnAddP->Click += gcnew System::EventHandler(this, &StoreForm::btnAddP_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->NameStore,
					this->distrit, this->Status
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 229);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(593, 180);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// NameStore
			// 
			this->NameStore->HeaderText = L"Nombre";
			this->NameStore->MinimumWidth = 6;
			this->NameStore->Name = L"NameStore";
			this->NameStore->Width = 125;
			// 
			// distrit
			// 
			this->distrit->HeaderText = L"Distrito";
			this->distrit->MinimumWidth = 6;
			this->distrit->Name = L"distrit";
			this->distrit->Width = 125;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado";
			this->Status->MinimumWidth = 6;
			this->Status->Name = L"Status";
			this->Status->Width = 125;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(325, 180);
			this->btnSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(88, 27);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"&Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &StoreForm::btnSearch_Click);
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->FormattingEnabled = true;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Habilitado", L"Desabilitado", L"Repleto" });
			this->comboBoxStatus->Location = System::Drawing::Point(272, 51);
			this->comboBoxStatus->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(92, 21);
			this->comboBoxStatus->TabIndex = 12;
			this->comboBoxStatus->SelectedIndexChanged += gcnew System::EventHandler(this, &StoreForm::comboBoxStatus_SelectedIndexChanged);
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Location = System::Drawing::Point(221, 54);
			this->lbStatus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(40, 13);
			this->lbStatus->TabIndex = 13;
			this->lbStatus->Text = L"Estado";
			// 
			// tboxid
			// 
			this->tboxid->Location = System::Drawing::Point(72, 51);
			this->tboxid->Margin = System::Windows::Forms::Padding(2);
			this->tboxid->Name = L"tboxid";
			this->tboxid->Size = System::Drawing::Size(134, 20);
			this->tboxid->TabIndex = 14;
			this->tboxid->TextChanged += gcnew System::EventHandler(this, &StoreForm::textBox3_TextChanged);
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(22, 50);
			this->lbId->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(40, 13);
			this->lbId->TabIndex = 15;
			this->lbId->Text = L"Código";
			this->lbId->Click += gcnew System::EventHandler(this, &StoreForm::lbId_Click);
			// 
			// btnAllView
			// 
			this->btnAllView->Location = System::Drawing::Point(433, 106);
			this->btnAllView->Name = L"btnAllView";
			this->btnAllView->Size = System::Drawing::Size(75, 23);
			this->btnAllView->TabIndex = 16;
			this->btnAllView->Text = L"Mostrar todo";
			this->btnAllView->UseVisualStyleBackColor = true;
			this->btnAllView->Click += gcnew System::EventHandler(this, &StoreForm::btnAllView_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(424, 75);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 17;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &StoreForm::btnClear_Click);
			// 
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 418);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAllView);
			this->Controls->Add(this->lbId);
			this->Controls->Add(this->tboxid);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnAddP);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->LbDistrit);
			this->Controls->Add(this->lbNamStore);
			this->Controls->Add(this->tboxDistrit);
			this->Controls->Add(this->tboxName);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StoreForm";
			this->Text = L"Almacenes";
			this->Load += gcnew System::EventHandler(this, &StoreForm::StoreForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StoreForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tboxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbId_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddP_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductsStoreForm^ productsStoreForm = gcnew ProductsStoreForm();
		productsStoreForm->ShowDialog();

}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(tboxid->Text);
	String^ name = tboxName->Text;
	String^ adress = tboxDistrit->Text;
	String^ status = comboBoxStatus->Text;


	Store^ s = gcnew Store(name, id, adress, status);
	SalesManager::AddStore(s);
	RefreshDGVStores();
}
	public:	void Actualiza_canti() {
		Products^ c = gcnew Products();


	}

public:	void RefreshDGVStores() {
			List<Store^>^ storeList = SalesManager::QueryStore();
			dataGridView1->Rows->Clear();
			for (int i = 0; i < storeList->Count; i++)
				dataGridView1->Rows->Add(gcnew array<String^>{
					"" + storeList[i]->Id,
						storeList[i]->Name,
						storeList[i]->Adress,
						storeList[i]->Status,
			});
		}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(tboxid->Text);
	String^ name = tboxName->Text;
	String^ adress = tboxDistrit->Text;
	String^ status = comboBoxStatus->Text;

	Store^ s = gcnew Store(name, id, adress, status);
	SalesManager::UpdateStore(s);

	RefreshDGVStores();
	//RefreshDGVStores();



}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	Store^ c = gcnew Store();
	try {
		if (tboxid->Text->Trim() == "") {
			RefreshDGVStores();
			ClearControls();
			return;
		}
		//c->Id = Int32::Parse(tboxid->Text);
		c->Id = Int32::Parse(tboxid->Text);
		c->Name = tboxName->Text;
		c->Adress = tboxDistrit->Text;
		

		dataGridView1->Rows->Clear();
		List<Store^>^ storeList = SalesManager::QueryStore();
		for (int i = 0; i < storeList->Count; i++) {
			if (c->Id == storeList[i]->Id)
				dataGridView1->Rows->Add(gcnew array<String^>{
				"" + storeList[i]->Id,
					storeList[i]->Name,
					storeList[i]->Adress,
					storeList[i]->Status,
			});
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Error al guardar al Cliente por error en los datos.");
		return;
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int Id = -1;
	try {
		if (tboxid->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún cliente seleccionado.");
			return;
		}
		Id = Int32::Parse(tboxid->Text);
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar al cliente porque el Id no es válido.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de eliminar al cliente?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteStore(Id);
		RefreshDGVStores();
		ClearControls();
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridView1->CurrentCell != nullptr &&
		dataGridView1->CurrentCell->Value != nullptr &&
		dataGridView1->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dataGridView1->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dataGridView1->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int storeID = Int32::Parse(a);
		Store^ store = SalesManager::QueryStoreByDocumentNumber(storeID);
		//MessageBox::Show(customer->ToString());
		if (store != nullptr) {
			tboxid->Text = "" + store->Id;
			tboxName->Text = store->Name;
			tboxDistrit->Text = store->Adress;
			
		}
	}
}

	   public:

		   System::Void ClearControls() {
			   tboxid->Clear();
			   tboxName->Clear();
			   tboxDistrit->Clear();
		   }
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClearControls();
}
private: System::Void btnAllView_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVStores();
}
private: System::Void comboBoxStatus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
