#include "ComboBoxItem.h"
#pragma once
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
	/// Resumen de ProductsStoreForm
	/// </summary>
	public ref class ProductsStoreForm : public System::Windows::Forms::Form
	{
	public:
		ProductsStoreForm(void)
		{
			InitializeComponent();
			LoadCmbProduct();
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
	private: System::Windows::Forms::Label^ lbStatus;
	private: System::Windows::Forms::ComboBox^ comboBoxStatus;

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lbNamStore;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::TextBox^ tboxName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbStore;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtId;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameStore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instock;
	private: System::Windows::Forms::Button^ btnAllView;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::ComboBox^ txtCategoria;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameStore = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->instock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lbNamStore = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->tboxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnAllView = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->NameStore,
					this->Category, this->Price, this->instock
			});
			this->dataGridView1->Location = System::Drawing::Point(36, 266);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(536, 210);
			this->dataGridView1->TabIndex = 23;
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
			// instock
			// 
			this->instock->HeaderText = L"Stock";
			this->instock->MinimumWidth = 6;
			this->instock->Name = L"instock";
			this->instock->Width = 125;
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
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(376, 136);
			this->txtPrice->Margin = System::Windows::Forms::Padding(2);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(150, 20);
			this->txtPrice->TabIndex = 16;
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
			this->cmbStore->Text = L"Seleccione un almacen";
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
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(84, 93);
			this->txtId->Margin = System::Windows::Forms::Padding(2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(150, 20);
			this->txtId->TabIndex = 32;
			// 
			// btnAllView
			// 
			this->btnAllView->Location = System::Drawing::Point(528, 175);
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
			// txtCategoria
			// 
			this->txtCategoria->FormattingEnabled = true;
			this->txtCategoria->Location = System::Drawing::Point(376, 95);
			this->txtCategoria->Name = L"txtCategoria";
			this->txtCategoria->Size = System::Drawing::Size(121, 21);
			this->txtCategoria->TabIndex = 36;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(347, 178);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 37;
			// 
			// ProductsStoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 523);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtCategoria);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAllView);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lbNamStore);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->tboxName);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ProductsStoreForm";
			this->Text = L"ProductsStoreForm";
			this->Load += gcnew System::EventHandler(this, &ProductsStoreForm::ProductsStoreForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(tboxid->Text);
	String^ name = tboxName->Text;
	String^ Trucazo = cmbStore->Text;




	String^ status = comboBoxStatus->Text;

	//
	// 
	// Products^ s = gcnew Products(name, id, Trucazo, status);
	//SalesManager::UpdateProduct(s);

	//RefreshDGVStores();
	//RefreshDGVStores();
}
	   private: System::Void dgvClient_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		   if (dataGridView1->CurrentCell != nullptr &&
			   dataGridView1->CurrentCell->Value != nullptr &&
			   dataGridView1->CurrentCell->Value->ToString() != "") {
			   int selectedrowindex = dataGridView1->SelectedCells[0]->RowIndex;
			   DataGridViewRow^ selectedRow = dataGridView1->Rows[selectedrowindex];
			   String^ a = selectedRow->Cells[5]->Value->ToString();

			   int clientID = Int32::Parse(a);
			   Client^ client = SalesManager::QueryClientByDocumentNumber(clientID);
			   //MessageBox::Show(customer->ToString());
			   if (client != nullptr) {
				   txtId->Text = "" + client->Id;
				   txtPrice->Text = client->FirstName;
				   txtNombre2->Text = client->SecondName;
				   txtApellido1->Text = client->FirstLastName;
				   txtApellido2->Text = client->SecondLastName;
				   txtTelefono->Text = client->PhoneNumber;
				   txtCorreo->Text = client->PersonalEmail;
				   txtBirthday->Text = client->Birthday;
			   }
		   }
	   }
	   


	   public: void LoadCmbProduct() {
		   comboBoxStatus->Items->Clear();
		   comboBoxStatus->Text = ("Seleccione un Producto");
		   // cmbCategories->Items->Add("Seleccione una categoria");
		   List<Products^>^ managerList = SalesManager::QueryProducts();
		   for (int i = 0; i < managerList->Count; i++) {
			   comboBoxStatus->Items->Add(gcnew ComboBoxItem(managerList[i]->Name+"/"+ gcnew ComboBoxItem(managerList[i]->Id.ToString())));
		   }
	   }


   public: void LoadCmbStore() {
	   cmbStore->Items->Clear();
	   cmbStore->Text = ("Seleccione un almacen");
	   // cmbCategories->Items->Add("Seleccione una categoria");
	   List<Store^>^ managerList = SalesManager::QueryStore();
	   for (int i = 0; i < managerList->Count; i++) {
		   cmbStore->Items->Add(gcnew ComboBoxItem(managerList[i]->Name));
	   }
   }

	   
};
}
