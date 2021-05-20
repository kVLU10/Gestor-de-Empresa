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
	/// Resumen de PersonalForm
	/// </summary>
	public ref class PersonalForm : public System::Windows::Forms::Form
	{
	public:
		PersonalForm(void)
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
		~PersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPersonal;
	private: System::Windows::Forms::Panel^ panel1;









	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;




	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::TextBox^ txtContraseña;



	private: System::Windows::Forms::TextBox^ txtCorreo;


	private: System::Windows::Forms::TextBox^ txtDocumentNumber;


	private: System::Windows::Forms::TextBox^ txtTelefono;


	private: System::Windows::Forms::TextBox^ txtApellido2;


	private: System::Windows::Forms::TextBox^ txtApellido1;


	private: System::Windows::Forms::TextBox^ txtEstado;


	private: System::Windows::Forms::TextBox^ txtNombre2;


	private: System::Windows::Forms::TextBox^ txtNombre1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DataGridView^ dgvPersonal;

	private: System::Windows::Forms::TextBox^ txtBirthday;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtUsuario;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DocumentNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contraseña;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cumpleaños;































	protected:



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPersonal = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtBirthday = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtDocumentNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido2 = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido1 = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dgvPersonal = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DocumentNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contraseña = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cumpleaños = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPersonal->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPersonal);
			this->tabControl1->Location = System::Drawing::Point(3, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(578, 556);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPersonal
			// 
			this->tabPersonal->Controls->Add(this->panel1);
			this->tabPersonal->Controls->Add(this->panel2);
			this->tabPersonal->Location = System::Drawing::Point(4, 22);
			this->tabPersonal->Name = L"tabPersonal";
			this->tabPersonal->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPersonal->Size = System::Drawing::Size(570, 530);
			this->tabPersonal->TabIndex = 0;
			this->tabPersonal->Text = L"Personal";
			this->tabPersonal->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txtUsuario);
			this->panel1->Controls->Add(this->txtBirthday);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->txtContraseña);
			this->panel1->Controls->Add(this->txtCorreo);
			this->panel1->Controls->Add(this->txtDocumentNumber);
			this->panel1->Controls->Add(this->txtTelefono);
			this->panel1->Controls->Add(this->txtApellido2);
			this->panel1->Controls->Add(this->txtApellido1);
			this->panel1->Controls->Add(this->txtEstado);
			this->panel1->Controls->Add(this->txtNombre2);
			this->panel1->Controls->Add(this->txtNombre1);
			this->panel1->Location = System::Drawing::Point(6, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 243);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 208);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 56;
			this->label1->Text = L"Usuario";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(3, 221);
			this->txtUsuario->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(94, 20);
			this->txtUsuario->TabIndex = 55;
			// 
			// txtBirthday
			// 
			this->txtBirthday->Location = System::Drawing::Point(375, 173);
			this->txtBirthday->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtBirthday->Name = L"txtBirthday";
			this->txtBirthday->Size = System::Drawing::Size(124, 20);
			this->txtBirthday->TabIndex = 54;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(193, 157);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 13);
			this->label23->TabIndex = 53;
			this->label23->Text = L"Correo";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(373, 160);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(108, 13);
			this->label22->TabIndex = 52;
			this->label22->Text = L"Fecha de Nacimiento";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(194, 208);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 13);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Contraseña";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 157);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 47;
			this->label18->Text = L"DNI o Pasaporte";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(372, 86);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 46;
			this->label17->Text = L"Teléfono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(193, 86);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Apellido 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 13);
			this->label15->TabIndex = 44;
			this->label15->Text = L"Apellido 1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(372, 6);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 43;
			this->label14->Text = L"Estado";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(193, 6);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Nombre 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Nombre 1";
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(196, 221);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(94, 20);
			this->txtContraseña->TabIndex = 38;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(196, 173);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(124, 20);
			this->txtCorreo->TabIndex = 37;
			// 
			// txtDocumentNumber
			// 
			this->txtDocumentNumber->Location = System::Drawing::Point(3, 173);
			this->txtDocumentNumber->Name = L"txtDocumentNumber";
			this->txtDocumentNumber->Size = System::Drawing::Size(124, 20);
			this->txtDocumentNumber->TabIndex = 36;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(375, 102);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(124, 20);
			this->txtTelefono->TabIndex = 35;
			// 
			// txtApellido2
			// 
			this->txtApellido2->Location = System::Drawing::Point(196, 102);
			this->txtApellido2->Name = L"txtApellido2";
			this->txtApellido2->Size = System::Drawing::Size(124, 20);
			this->txtApellido2->TabIndex = 34;
			// 
			// txtApellido1
			// 
			this->txtApellido1->Location = System::Drawing::Point(3, 102);
			this->txtApellido1->Name = L"txtApellido1";
			this->txtApellido1->Size = System::Drawing::Size(124, 20);
			this->txtApellido1->TabIndex = 33;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(375, 22);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(124, 20);
			this->txtEstado->TabIndex = 32;
			// 
			// txtNombre2
			// 
			this->txtNombre2->Location = System::Drawing::Point(196, 22);
			this->txtNombre2->Name = L"txtNombre2";
			this->txtNombre2->Size = System::Drawing::Size(124, 20);
			this->txtNombre2->TabIndex = 31;
			// 
			// txtNombre1
			// 
			this->txtNombre1->Location = System::Drawing::Point(3, 22);
			this->txtNombre1->Name = L"txtNombre1";
			this->txtNombre1->Size = System::Drawing::Size(124, 20);
			this->txtNombre1->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->btnDelete);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->btnUpdate);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->btnAdd);
			this->panel4->Location = System::Drawing::Point(1, 254);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(562, 41);
			this->panel4->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(284, 9);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 19);
			this->button3->TabIndex = 2;
			this->button3->Text = L"&Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PersonalForm::btnDelete_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(351, 41);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(126, 23);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &PersonalForm::btnDelete_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 9);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"&Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PersonalForm::btnUpdate_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(196, 40);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(126, 24);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PersonalForm::btnUpdate_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 9);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"&Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PersonalForm::btnAdd_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(38, 41);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(126, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PersonalForm::btnAdd_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(2, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(565, 510);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dgvPersonal);
			this->panel3->Location = System::Drawing::Point(1, 298);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(565, 209);
			this->panel3->TabIndex = 0;
			// 
			// dgvPersonal
			// 
			this->dgvPersonal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersonal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Nombre1,
					this->Nombre2, this->Apellido1, this->Apellido2, this->Telefono, this->DocumentNumber, this->Correo, this->Usuario, this->Contraseña,
					this->Cumpleaños
			});
			this->dgvPersonal->Location = System::Drawing::Point(3, 3);
			this->dgvPersonal->Name = L"dgvPersonal";
			this->dgvPersonal->RowHeadersWidth = 51;
			this->dgvPersonal->Size = System::Drawing::Size(558, 195);
			this->dgvPersonal->TabIndex = 0;
			this->dgvPersonal->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellContentClick);
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
			// Usuario
			// 
			this->Usuario->HeaderText = L"Usuario";
			this->Usuario->Name = L"Usuario";
			// 
			// Contraseña
			// 
			this->Contraseña->HeaderText = L"Contraseña";
			this->Contraseña->MinimumWidth = 6;
			this->Contraseña->Name = L"Contraseña";
			this->Contraseña->Width = 125;
			// 
			// Cumpleaños
			// 
			this->Cumpleaños->HeaderText = L"Cumpleaños";
			this->Cumpleaños->MinimumWidth = 6;
			this->Cumpleaños->Name = L"Cumpleaños";
			this->Cumpleaños->Width = 125;
			// 
			// PersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 576);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PersonalForm";
			this->Text = L"Personal";
			this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPersonal->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Personal^ ps = gcnew Personal();

		/*int Id = Int32::Parse(txtDocumentNumber->Text);
		String^ FirstName = txtNombre1->Text;
		String^ SecondName = txtNombre2->Text;
		String^ FirstLastName = txtApellido1->Text;
		String^ SecondLastName = txtApellido2->Text;
		
		String^ Estado = txtEstado->Text;
		String^ PhoneNumber = txtTelefono->Text;
		String^ PersonalEmail = txtCorreo->Text;
		String^ Password = txtContraseña->Text;
		String^ Birthday = txtBirthday->Text;*/

		ps -> Id = Int32::Parse(txtDocumentNumber->Text);
		ps->FirstName = txtNombre1->Text;
		ps->SecondName = txtNombre2->Text;
		ps->FirstLastName = txtApellido1->Text;
		ps->SecondLastName = txtApellido2->Text;
		ps->PhoneNumber = txtTelefono->Text;
		ps->PersonalEmail = txtCorreo->Text;
		ps->Username = txtUsuario->Text;
		ps->Password = txtContraseña->Text;
		ps->Birthday = txtBirthday->Text;

		//Personal^ ps = gcnew Personal(Id, FirstName, Password, FirstName, SecondName, FirstLastName, SecondLastName, 'A', 100, 100, PersonalEmail, PhoneNumber, Birthday);

		SalesManager::AddPersonal(ps);
		refreshDGVPersonal();

	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDocumentNumber->Text->Trim() == "") {
			MessageBox::Show("El Documento de Identidad no debe estar vacío.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de actualizar al Personal?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Personal^ ps = gcnew Personal();
			try {
				ps->Id = Int32::Parse(txtDocumentNumber->Text);
				ps->FirstName = txtNombre1->Text;
				ps->SecondName = txtNombre2->Text;
				ps->FirstLastName = txtApellido1->Text;
				ps->SecondLastName = txtApellido2->Text;
				ps->PhoneNumber = txtTelefono->Text;
				ps->PersonalEmail = txtCorreo->Text;
				ps->Username = txtUsuario->Text;
				ps->Password = txtContraseña->Text;
				ps->Birthday = txtBirthday->Text;

				SalesManager::UpdatePersonal(ps);
				refreshDGVPersonal();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al grabar.");
				return;
			}
		}
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int Id =-1;
		try {
			if (txtDocumentNumber->Text->Trim() == "") {
				MessageBox::Show("No se puede eliminar porque no hay ningún empleado seleccionado.");
				return;
			}
			Id = Int32::Parse(txtDocumentNumber->Text);
		}
		catch (...) {
			MessageBox::Show("No se puede eliminar al empleado porque el Id no es válido.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de eliminar al empleado?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			SalesManager::DeletePersonal(Id);

			refreshDGVPersonal();
			ClearControls();
		}
		/*
		int selectedRows = dgvPersonal->SelectedRows->Count;

		if (selectedRows == 1) {
			if (MessageBox::Show(
				"¿Está seguro de eliminar al empleado?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				dgvPersonal->Rows->RemoveAt(dgvPersonal->SelectedRows[0]->Index);

				SalesController::DBController::DeletePersonal(DocNum);
				ClearControls();
			}
		}
		else {
			MessageBox::Show("Para eliminar a un empleado debe seleccionar todo el registro");
		}*/
	}

	public:
		void refreshDGVPersonal() {
			List<Personal^>^ personalList = SalesManager::QueryPersonal();
			dgvPersonal->Rows->Clear();
			for (int i = 0; i < personalList->Count; i++) {
				dgvPersonal->Rows->Add(gcnew array <String^>{
					 personalList[i]->FirstName,
					 personalList[i]->SecondName,
					 personalList[i]->FirstLastName,
					 personalList[i]->SecondLastName,
					 personalList[i]->PhoneNumber,
					 "" + personalList[i]->Id,
					 personalList[i]->PersonalEmail,
					 personalList[i]->Username,
					 personalList[i]->Password,
					 personalList[i]->Birthday
				});
			}
		}

	private: System::Void PersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {}
		
		   System::Void ClearControls() {
			txtDocumentNumber->Clear();
			txtNombre1->Clear();
			txtNombre2->Clear();
			txtApellido1->Clear();
			txtApellido2->Clear();
			txtTelefono->Clear();
			txtCorreo->Clear();
			txtUsuario->Clear();
			txtContraseña->Clear();
			txtBirthday->Clear();
			txtEstado->Clear();
		}
};
}
