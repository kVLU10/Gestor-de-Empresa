#pragma once
#include "ComboBoxItem.h"

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
	/// Resumen de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
		{
			InitializeComponent();
			refreshDGVClient();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tapClient;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dgvClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DocumentNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cumpleaños;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::TextBox^ txtBirthday;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtDocumentNumber;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtApellido2;
	private: System::Windows::Forms::TextBox^ txtApellido1;
	private: System::Windows::Forms::TextBox^ txtNombre2;
	private: System::Windows::Forms::TextBox^ txtNombre1;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::ComboBox^ cmbDistrit;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAddress;

	private: System::Windows::Forms::Label^ label2;








































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
			this->tapClient = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dgvClient = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DocumentNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cumpleaños = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbDistrit = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBirthday = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtDocumentNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido2 = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre1 = (gcnew System::Windows::Forms::TextBox());
			this->tapClient->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClient))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tapClient
			// 
			this->tapClient->Controls->Add(this->tabPage1);
			this->tapClient->Location = System::Drawing::Point(16, 15);
			this->tapClient->Margin = System::Windows::Forms::Padding(4);
			this->tapClient->Name = L"tapClient";
			this->tapClient->SelectedIndex = 0;
			this->tapClient->Size = System::Drawing::Size(972, 773);
			this->tapClient->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(964, 744);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clientes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(953, 730);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dgvClient);
			this->panel4->Location = System::Drawing::Point(4, 422);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(944, 308);
			this->panel4->TabIndex = 2;
			// 
			// dgvClient
			// 
			this->dgvClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nombre1, this->Nombre2,
					this->Apellido1, this->Apellido2, this->Telefono, this->DocumentNumber, this->Correo, this->Cumpleaños
			});
			this->dgvClient->Location = System::Drawing::Point(20, 16);
			this->dgvClient->Margin = System::Windows::Forms::Padding(4);
			this->dgvClient->Name = L"dgvClient";
			this->dgvClient->RowHeadersWidth = 51;
			this->dgvClient->Size = System::Drawing::Size(904, 273);
			this->dgvClient->TabIndex = 1;
			this->dgvClient->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientForm::dgvClient_CellClick);
			// 
			// Nombre1
			// 
			this->Nombre1->HeaderText = L"Nombre1";
			this->Nombre1->MinimumWidth = 6;
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Width = 125;
			// 
			// Nombre2
			// 
			this->Nombre2->HeaderText = L"Nombre2";
			this->Nombre2->MinimumWidth = 6;
			this->Nombre2->Name = L"Nombre2";
			this->Nombre2->Width = 125;
			// 
			// Apellido1
			// 
			this->Apellido1->HeaderText = L"Apellido1";
			this->Apellido1->MinimumWidth = 6;
			this->Apellido1->Name = L"Apellido1";
			this->Apellido1->Width = 125;
			// 
			// Apellido2
			// 
			this->Apellido2->HeaderText = L"Apellido2";
			this->Apellido2->MinimumWidth = 6;
			this->Apellido2->Name = L"Apellido2";
			this->Apellido2->Width = 125;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Teléfono";
			this->Telefono->MinimumWidth = 6;
			this->Telefono->Name = L"Telefono";
			this->Telefono->Width = 125;
			// 
			// DocumentNumber
			// 
			this->DocumentNumber->HeaderText = L"DNI o Pasaporte";
			this->DocumentNumber->MinimumWidth = 6;
			this->DocumentNumber->Name = L"DocumentNumber";
			this->DocumentNumber->Width = 125;
			// 
			// Correo
			// 
			this->Correo->HeaderText = L"Correo";
			this->Correo->MinimumWidth = 6;
			this->Correo->Name = L"Correo";
			this->Correo->Width = 125;
			// 
			// Cumpleaños
			// 
			this->Cumpleaños->HeaderText = L"Cumpleaños";
			this->Cumpleaños->MinimumWidth = 6;
			this->Cumpleaños->Name = L"Cumpleaños";
			this->Cumpleaños->Width = 125;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnSearch);
			this->panel3->Controls->Add(this->btnDelete);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->btnAdd);
			this->panel3->Location = System::Drawing::Point(4, 351);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(944, 64);
			this->panel3->TabIndex = 1;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(705, 16);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(168, 28);
			this->btnSearch->TabIndex = 16;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ClientForm::btnSearch_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(490, 16);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(168, 28);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ClientForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(274, 15);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(168, 29);
			this->btnUpdate->TabIndex = 4;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ClientForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(44, 16);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(168, 28);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ClientForm::btnAdd_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txtAddress);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->cmbDistrit);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->txtBirthday);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->txtCorreo);
			this->panel2->Controls->Add(this->txtDocumentNumber);
			this->panel2->Controls->Add(this->txtTelefono);
			this->panel2->Controls->Add(this->txtApellido2);
			this->panel2->Controls->Add(this->txtApellido1);
			this->panel2->Controls->Add(this->txtNombre2);
			this->panel2->Controls->Add(this->txtNombre1);
			this->panel2->Location = System::Drawing::Point(4, 4);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(944, 340);
			this->panel2->TabIndex = 0;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(131, 257);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(484, 22);
			this->txtAddress->TabIndex = 74;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 17);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Dirección";
			// 
			// cmbDistrit
			// 
			this->cmbDistrit->FormattingEnabled = true;
			this->cmbDistrit->Location = System::Drawing::Point(748, 191);
			this->cmbDistrit->Name = L"cmbDistrit";
			this->cmbDistrit->Size = System::Drawing::Size(193, 24);
			this->cmbDistrit->TabIndex = 72;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(688, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 71;
			this->label1->Text = L"Distrito";
			// 
			// txtBirthday
			// 
			this->txtBirthday->Location = System::Drawing::Point(451, 191);
			this->txtBirthday->Margin = System::Windows::Forms::Padding(4);
			this->txtBirthday->Name = L"txtBirthday";
			this->txtBirthday->Size = System::Drawing::Size(164, 22);
			this->txtBirthday->TabIndex = 69;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(301, 194);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(141, 17);
			this->label22->TabIndex = 68;
			this->label22->Text = L"Fecha de Nacimiento";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(689, 114);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(51, 17);
			this->label23->TabIndex = 67;
			this->label23->Text = L"Correo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 194);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(112, 17);
			this->label18->TabIndex = 66;
			this->label18->Text = L"DNI o Pasaporte";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(675, 32);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 17);
			this->label17->TabIndex = 65;
			this->label17->Text = L"Teléfono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(372, 114);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(70, 17);
			this->label16->TabIndex = 64;
			this->label16->Text = L"Apellido 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(53, 114);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 17);
			this->label15->TabIndex = 63;
			this->label15->Text = L"Apellido 1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(372, 32);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 17);
			this->label13->TabIndex = 62;
			this->label13->Text = L"Nombre 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(53, 31);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 17);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Nombre 1";
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(748, 111);
			this->txtCorreo->Margin = System::Windows::Forms::Padding(4);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(164, 22);
			this->txtCorreo->TabIndex = 60;
			// 
			// txtDocumentNumber
			// 
			this->txtDocumentNumber->Location = System::Drawing::Point(131, 191);
			this->txtDocumentNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtDocumentNumber->Name = L"txtDocumentNumber";
			this->txtDocumentNumber->Size = System::Drawing::Size(164, 22);
			this->txtDocumentNumber->TabIndex = 59;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(748, 28);
			this->txtTelefono->Margin = System::Windows::Forms::Padding(4);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(164, 22);
			this->txtTelefono->TabIndex = 58;
			// 
			// txtApellido2
			// 
			this->txtApellido2->Location = System::Drawing::Point(451, 111);
			this->txtApellido2->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido2->Name = L"txtApellido2";
			this->txtApellido2->Size = System::Drawing::Size(164, 22);
			this->txtApellido2->TabIndex = 57;
			// 
			// txtApellido1
			// 
			this->txtApellido1->Location = System::Drawing::Point(131, 111);
			this->txtApellido1->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido1->Name = L"txtApellido1";
			this->txtApellido1->Size = System::Drawing::Size(164, 22);
			this->txtApellido1->TabIndex = 56;
			// 
			// txtNombre2
			// 
			this->txtNombre2->Location = System::Drawing::Point(451, 28);
			this->txtNombre2->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre2->Name = L"txtNombre2";
			this->txtNombre2->Size = System::Drawing::Size(164, 22);
			this->txtNombre2->TabIndex = 55;
			// 
			// txtNombre1
			// 
			this->txtNombre1->Location = System::Drawing::Point(131, 29);
			this->txtNombre1->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre1->Name = L"txtNombre1";
			this->txtNombre1->Size = System::Drawing::Size(164, 22);
			this->txtNombre1->TabIndex = 54;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 793);
			this->Controls->Add(this->tapClient);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ClientForm";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			this->tapClient->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClient))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ c = gcnew Client();
		/*
		int Id = Int32::Parse(txtDocumentNumber->Text);
		String^ FirstName = txtNombre1->Text;
		String^ SecondName = txtNombre2->Text;
		String^ FirstLastName = txtApellido1->Text;
		String^ SecondLastName = txtApellido2->Text;
		String^ PhoneNumber = txtTelefono->Text;
		String^ PersonalEmail = txtCorreo->Text;
		String^ Birthday = txtBirthday->Text;
		*/

		c->Id = Int32::Parse(txtDocumentNumber->Text);
		c->FirstName = txtNombre1->Text;
		c->SecondName = txtNombre2->Text;
		c->FirstLastName = txtApellido1->Text;
		c->SecondLastName = txtApellido2->Text;
		c->PhoneNumber = txtTelefono->Text;
		c->PersonalEmail = txtCorreo->Text;
		c->Birthday = txtBirthday->Text;

		//Client^ c = gcnew Client(Id, FirstName, SecondName, FirstLastName, SecondLastName,
		//	 "AVENIDA Peru", 123, Birthday, PersonalEmail, PhoneNumber);

		SalesManager::AddClient(c);
		refreshDGVClient();
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDocumentNumber->Text->Trim() == "") {
			MessageBox::Show("El Documento de Identidad no debe estar vacío.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de actualizar al Cliente?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Client^ c = gcnew Client();
			try {
				c->Id = Int32::Parse(txtDocumentNumber->Text);
				c->FirstName = txtNombre1->Text;
				c->SecondName = txtNombre2->Text;
				c->FirstLastName = txtApellido1->Text;
				c->SecondLastName = txtApellido2->Text;
				c->PhoneNumber = txtTelefono->Text;
				c->PersonalEmail = txtCorreo->Text;
				c->Birthday = txtBirthday->Text;

				SalesManager::UpdateClient(c);
				refreshDGVClient();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al grabar.");
				return;
			}
		}
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int Id = -1;
		try {
			if (txtDocumentNumber->Text->Trim() == "") {
				MessageBox::Show("No se puede eliminar porque no hay ningún cliente seleccionado.");
				return;
			}
			Id = Int32::Parse(txtDocumentNumber->Text);
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
			SalesManager::DeleteClient(Id);

			refreshDGVClient();
			ClearControls();
		}
	}

	public:
		void refreshDGVClient() {
			List<Client^>^ clientList = SalesManager::QueryClient();
			dgvClient->Rows->Clear();
			for (int i = 0; i < clientList->Count; i++) {
				dgvClient->Rows->Add(gcnew array <String^>{
						clientList[i]->FirstName,
						clientList[i]->SecondName,
						clientList[i]->FirstLastName,
						clientList[i]->SecondLastName,
						clientList[i]->PhoneNumber,
						"" + clientList[i]->Id,
						clientList[i]->PersonalEmail,
						clientList[i]->Birthday
				});
			}
		}

		System::Void ClearControls() {
			txtDocumentNumber->Clear();
			txtNombre1->Clear();
			txtNombre2->Clear();
			txtApellido1->Clear();
			txtApellido2->Clear();
			txtTelefono->Clear();
			txtCorreo->Clear();
			txtBirthday->Clear();
		}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ c = gcnew Client();
		try {
			if (txtDocumentNumber->Text->Trim() == "") {
				refreshDGVClient();
				ClearControls();
				return;
			}
			c->Id = Int32::Parse(txtDocumentNumber->Text);
			c->Id = Int32::Parse(txtDocumentNumber->Text);
			c->FirstName = txtNombre1->Text;
			c->SecondName = txtNombre2->Text;
			c->FirstLastName = txtApellido1->Text;
			c->SecondLastName = txtApellido2->Text;
			c->PhoneNumber = txtTelefono->Text;
			c->PersonalEmail = txtCorreo->Text;
			c->Birthday = txtBirthday->Text;
			
			dgvClient->Rows->Clear();
			List<Client^>^ clientList = SalesManager::QueryClient();
			for (int i = 0; i < clientList->Count; i++) {
				if (c->Id == clientList[i]->Id)
					dgvClient->Rows->Add(gcnew array<String^>{
						clientList[i]->FirstName,
						clientList[i]->SecondName,
						clientList[i]->FirstLastName,
						clientList[i]->SecondLastName,
						clientList[i]->PhoneNumber,
						"" + clientList[i]->Id,
						clientList[i]->PersonalEmail,
						clientList[i]->Birthday
				});
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al guardar al Cliente por error en los datos.");
			return;
		}
	}
	
	private: System::Void dgvClient_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvClient->CurrentCell != nullptr &&
			dgvClient->CurrentCell->Value != nullptr &&
			dgvClient->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvClient->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvClient->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[5]->Value->ToString();

			int clientID = Int32::Parse(a);
			Client^ client = SalesManager::QueryClientByDocumentNumber(clientID);
			//MessageBox::Show(customer->ToString());
			if (client != nullptr) {
				txtDocumentNumber->Text = "" + client->Id;
				txtNombre1->Text = client->FirstName;
				txtNombre2->Text = client->SecondName;
				txtApellido1->Text = client->FirstLastName;
				txtApellido2->Text = client->SecondLastName;
				txtTelefono->Text = client->PhoneNumber;
				txtCorreo->Text = client->PersonalEmail;
				txtBirthday->Text = client->Birthday;
			}
		}
	}
	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadCmbDistrit();
	}
	public: void LoadCmbDistrit() {
		cmbDistrit->Items->Clear();
		List<Distrit^>^ managerList = SalesManager::QueryDistrit();
		for (int i = 0; i < managerList->Count; i++) {
			cmbDistrit->Items->Add(gcnew ComboBoxItem(managerList[i]->Name));
		}
	}
};
}

