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
	/// Resumen de ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(void)
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
	private: System::Windows::Forms::Panel^ panel2;
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
	private: System::Windows::Forms::TextBox^ txtBirthday;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnAddAddress;
	private: System::Windows::Forms::DataGridView^ dgvClient;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DocumentNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cumpleaños;




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
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnAddAddress = (gcnew System::Windows::Forms::Button());
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
			this->tapClient->Location = System::Drawing::Point(2, 1);
			this->tapClient->Name = L"tapClient";
			this->tapClient->SelectedIndex = 0;
			this->tapClient->Size = System::Drawing::Size(721, 648);
			this->tapClient->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(713, 622);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clientes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(704, 614);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dgvClient);
			this->panel4->Location = System::Drawing::Point(3, 307);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(698, 301);
			this->panel4->TabIndex = 2;
			// 
			// dgvClient
			// 
			this->dgvClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nombre1, this->Nombre2,
					this->Apellido1, this->Apellido2, this->Telefono, this->DocumentNumber, this->Correo, this->Cumpleaños
			});
			this->dgvClient->Location = System::Drawing::Point(6, 3);
			this->dgvClient->Name = L"dgvClient";
			this->dgvClient->Size = System::Drawing::Size(689, 286);
			this->dgvClient->TabIndex = 1;
			// 
			// Nombre1
			// 
			this->Nombre1->HeaderText = L"Nombre1";
			this->Nombre1->Name = L"Nombre1";
			// 
			// Nombre2
			// 
			this->Nombre2->HeaderText = L"Nombre2";
			this->Nombre2->Name = L"Nombre2";
			// 
			// Apellido1
			// 
			this->Apellido1->HeaderText = L"Apellido1";
			this->Apellido1->Name = L"Apellido1";
			// 
			// Apellido2
			// 
			this->Apellido2->HeaderText = L"Apellido2";
			this->Apellido2->Name = L"Apellido2";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Teléfono";
			this->Telefono->Name = L"Telefono";
			// 
			// DocumentNumber
			// 
			this->DocumentNumber->HeaderText = L"DNI o Pasaporte";
			this->DocumentNumber->Name = L"DocumentNumber";
			// 
			// Correo
			// 
			this->Correo->HeaderText = L"Correo";
			this->Correo->Name = L"Correo";
			// 
			// Cumpleaños
			// 
			this->Cumpleaños->HeaderText = L"Cumpleaños";
			this->Cumpleaños->Name = L"Cumpleaños";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnDelete);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->btnAdd);
			this->panel3->Location = System::Drawing::Point(3, 228);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(698, 72);
			this->panel3->TabIndex = 1;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(484, 27);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(126, 23);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ClientForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(278, 26);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(126, 24);
			this->btnUpdate->TabIndex = 4;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ClientForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(67, 27);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(126, 23);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ClientForm::btnAdd_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnAddAddress);
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
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(698, 218);
			this->panel2->TabIndex = 0;
			// 
			// btnAddAddress
			// 
			this->btnAddAddress->Location = System::Drawing::Point(383, 177);
			this->btnAddAddress->Name = L"btnAddAddress";
			this->btnAddAddress->Size = System::Drawing::Size(124, 23);
			this->btnAddAddress->TabIndex = 70;
			this->btnAddAddress->Text = L"&Agregar Dirección";
			this->btnAddAddress->UseVisualStyleBackColor = true;
			// 
			// txtBirthday
			// 
			this->txtBirthday->Location = System::Drawing::Point(383, 107);
			this->txtBirthday->Name = L"txtBirthday";
			this->txtBirthday->Size = System::Drawing::Size(124, 20);
			this->txtBirthday->TabIndex = 69;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(380, 90);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(108, 13);
			this->label22->TabIndex = 68;
			this->label22->Text = L"Fecha de Nacimiento";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(193, 161);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 13);
			this->label23->TabIndex = 67;
			this->label23->Text = L"Correo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 161);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 66;
			this->label18->Text = L"DNI o Pasaporte";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(380, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 65;
			this->label17->Text = L"Teléfono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(193, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 64;
			this->label16->Text = L"Apellido 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 90);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 13);
			this->label15->TabIndex = 63;
			this->label15->Text = L"Apellido 1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(193, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 62;
			this->label13->Text = L"Nombre 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Nombre 1";
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(196, 177);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(124, 20);
			this->txtCorreo->TabIndex = 60;
			// 
			// txtDocumentNumber
			// 
			this->txtDocumentNumber->Location = System::Drawing::Point(3, 177);
			this->txtDocumentNumber->Name = L"txtDocumentNumber";
			this->txtDocumentNumber->Size = System::Drawing::Size(124, 20);
			this->txtDocumentNumber->TabIndex = 59;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(383, 26);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(124, 20);
			this->txtTelefono->TabIndex = 58;
			// 
			// txtApellido2
			// 
			this->txtApellido2->Location = System::Drawing::Point(196, 106);
			this->txtApellido2->Name = L"txtApellido2";
			this->txtApellido2->Size = System::Drawing::Size(124, 20);
			this->txtApellido2->TabIndex = 57;
			// 
			// txtApellido1
			// 
			this->txtApellido1->Location = System::Drawing::Point(3, 106);
			this->txtApellido1->Name = L"txtApellido1";
			this->txtApellido1->Size = System::Drawing::Size(124, 20);
			this->txtApellido1->TabIndex = 56;
			// 
			// txtNombre2
			// 
			this->txtNombre2->Location = System::Drawing::Point(196, 26);
			this->txtNombre2->Name = L"txtNombre2";
			this->txtNombre2->Size = System::Drawing::Size(124, 20);
			this->txtNombre2->TabIndex = 55;
			// 
			// txtNombre1
			// 
			this->txtNombre1->Location = System::Drawing::Point(3, 26);
			this->txtNombre1->Name = L"txtNombre1";
			this->txtNombre1->Size = System::Drawing::Size(124, 20);
			this->txtNombre1->TabIndex = 54;
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 652);
			this->Controls->Add(this->tapClient);
			this->Name = L"ClientForm";
			this->Text = L"Clientes";
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
		int selectedRows = dgvClient->SelectedRows->Count;
		if (selectedRows == 1) {
			if (MessageBox::Show(
				"¿Está seguro de eliminar al cliente?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				dgvClient->Rows->RemoveAt(dgvClient->SelectedRows[0]->Index);
				ClearControls();
			}
		}
		else {
			MessageBox::Show("Para eliminar a un empleado debe seleccionar todo el registro");
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
};
}
