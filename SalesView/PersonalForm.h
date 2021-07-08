#pragma once

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
	/// Resumen de PersonalForm
	/// </summary>
	public ref class PersonalForm : public System::Windows::Forms::Form
	{
	public:
		PersonalForm(void)
		{
			InitializeComponent();
			refreshDGVPersonal();
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










	private: System::Windows::Forms::TextBox^ txtBirthday;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dgvPersonal;
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
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;
private: System::Windows::Forms::Button^ btnSearch;
private: System::Windows::Forms::Button^ btnAllView;
private: System::Windows::Forms::Button^ btnClear;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::PictureBox^ pbHuella;














































	protected:



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPersonal = (gcnew System::Windows::Forms::TabPage());
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pbHuella = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnAllView = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPersonal->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuella))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPersonal);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(729, 628);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPersonal
			// 
			this->tabPersonal->Controls->Add(this->panel3);
			this->tabPersonal->Controls->Add(this->panel1);
			this->tabPersonal->Controls->Add(this->panel4);
			this->tabPersonal->Location = System::Drawing::Point(4, 22);
			this->tabPersonal->Name = L"tabPersonal";
			this->tabPersonal->Padding = System::Windows::Forms::Padding(2);
			this->tabPersonal->Size = System::Drawing::Size(721, 602);
			this->tabPersonal->TabIndex = 0;
			this->tabPersonal->Text = L"Personal";
			this->tabPersonal->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dgvPersonal);
			this->panel3->Location = System::Drawing::Point(5, 345);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(708, 250);
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
			this->dgvPersonal->Location = System::Drawing::Point(15, 16);
			this->dgvPersonal->Name = L"dgvPersonal";
			this->dgvPersonal->RowHeadersWidth = 51;
			this->dgvPersonal->Size = System::Drawing::Size(679, 217);
			this->dgvPersonal->TabIndex = 0;
			this->dgvPersonal->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dgvPersonal_CellClick);
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
			// panel1
			// 
			this->panel1->Controls->Add(this->pbHuella);
			this->panel1->Controls->Add(this->button1);
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
			this->panel1->Location = System::Drawing::Point(5, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(708, 276);
			this->panel1->TabIndex = 0;
			// 
			// pbHuella
			// 
			this->pbHuella->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbHuella->Location = System::Drawing::Point(602, 198);
			this->pbHuella->Name = L"pbHuella";
			this->pbHuella->Size = System::Drawing::Size(73, 66);
			this->pbHuella->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbHuella->TabIndex = 58;
			this->pbHuella->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(505, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 57;
			this->button1->Text = L"&Agregar Huella";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PersonalForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(502, 163);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 56;
			this->label1->Text = L"Usuario";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(551, 160);
			this->txtUsuario->Margin = System::Windows::Forms::Padding(2);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(94, 20);
			this->txtUsuario->TabIndex = 55;
			// 
			// txtBirthday
			// 
			this->txtBirthday->Location = System::Drawing::Point(140, 223);
			this->txtBirthday->Margin = System::Windows::Forms::Padding(2);
			this->txtBirthday->Name = L"txtBirthday";
			this->txtBirthday->Size = System::Drawing::Size(124, 20);
			this->txtBirthday->TabIndex = 54;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(303, 163);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 13);
			this->label23->TabIndex = 53;
			this->label23->Text = L"Correo";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(26, 226);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(108, 13);
			this->label22->TabIndex = 52;
			this->label22->Text = L"Fecha de Nacimiento";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(280, 226);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 13);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Contraseña";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(48, 163);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 47;
			this->label18->Text = L"DNI o Pasaporte";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(496, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 46;
			this->label17->Text = L"Teléfono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(288, 99);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Apellido 2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(81, 99);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 13);
			this->label15->TabIndex = 44;
			this->label15->Text = L"Apellido 1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(505, 34);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 43;
			this->label14->Text = L"Estado";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(288, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Nombre 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Nombre 1";
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(347, 223);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(94, 20);
			this->txtContraseña->TabIndex = 38;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(347, 160);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(124, 20);
			this->txtCorreo->TabIndex = 37;
			// 
			// txtDocumentNumber
			// 
			this->txtDocumentNumber->Location = System::Drawing::Point(140, 160);
			this->txtDocumentNumber->Name = L"txtDocumentNumber";
			this->txtDocumentNumber->Size = System::Drawing::Size(124, 20);
			this->txtDocumentNumber->TabIndex = 36;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(551, 96);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(124, 20);
			this->txtTelefono->TabIndex = 35;
			// 
			// txtApellido2
			// 
			this->txtApellido2->Location = System::Drawing::Point(347, 96);
			this->txtApellido2->Name = L"txtApellido2";
			this->txtApellido2->Size = System::Drawing::Size(124, 20);
			this->txtApellido2->TabIndex = 34;
			// 
			// txtApellido1
			// 
			this->txtApellido1->Location = System::Drawing::Point(140, 96);
			this->txtApellido1->Name = L"txtApellido1";
			this->txtApellido1->Size = System::Drawing::Size(124, 20);
			this->txtApellido1->TabIndex = 33;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(551, 31);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(124, 20);
			this->txtEstado->TabIndex = 32;
			// 
			// txtNombre2
			// 
			this->txtNombre2->Location = System::Drawing::Point(347, 31);
			this->txtNombre2->Name = L"txtNombre2";
			this->txtNombre2->Size = System::Drawing::Size(124, 20);
			this->txtNombre2->TabIndex = 31;
			// 
			// txtNombre1
			// 
			this->txtNombre1->Location = System::Drawing::Point(140, 31);
			this->txtNombre1->Name = L"txtNombre1";
			this->txtNombre1->Size = System::Drawing::Size(124, 20);
			this->txtNombre1->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->btnClear);
			this->panel4->Controls->Add(this->btnAllView);
			this->panel4->Controls->Add(this->btnSearch);
			this->panel4->Controls->Add(this->btnDelete);
			this->panel4->Controls->Add(this->btnUpdate);
			this->panel4->Controls->Add(this->btnAdd);
			this->panel4->Location = System::Drawing::Point(5, 287);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(708, 52);
			this->panel4->TabIndex = 1;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(612, 14);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(82, 23);
			this->btnClear->TabIndex = 57;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &PersonalForm::btnClear_Click);
			// 
			// btnAllView
			// 
			this->btnAllView->Location = System::Drawing::Point(490, 14);
			this->btnAllView->Name = L"btnAllView";
			this->btnAllView->Size = System::Drawing::Size(82, 23);
			this->btnAllView->TabIndex = 58;
			this->btnAllView->Text = L"Mostrar todo";
			this->btnAllView->UseVisualStyleBackColor = true;
			this->btnAllView->Click += gcnew System::EventHandler(this, &PersonalForm::btnAllView_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(369, 14);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(82, 23);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"&Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &PersonalForm::btnSearch_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(249, 14);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(82, 23);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &PersonalForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(131, 14);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(82, 23);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PersonalForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(15, 14);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(82, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PersonalForm::btnAdd_Click);
			// 
			// PersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 644);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PersonalForm";
			this->Text = L"Personal";
			this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPersonal->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonal))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuella))->EndInit();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Personal^ ps = gcnew Personal();
		try {
			if (txtNombre1->Text->Trim() == "" || txtNombre2->Text->Trim() == "" ||
				txtApellido1->Text->Trim() == "" || txtApellido2->Text->Trim() == "" ||
				txtTelefono->Text->Trim() == "" || txtBirthday->Text->Trim() == "" ||
				txtContraseña->Text->Trim() == "" || txtCorreo->Text->Trim() == "" ||
				txtDocumentNumber->Text->Trim() == "" || txtEstado->Text->Trim() == "" ||
				txtUsuario->Text->Trim() == "") {
				MessageBox::Show("Hay 1 o más campos vacíos.");
				return;
			}

			ps->DocumentNumber = txtDocumentNumber->Text;
			ps->FirstName = txtNombre1->Text;
			ps->SecondName = txtNombre2->Text;
			ps->FirstLastName = txtApellido1->Text;
			ps->SecondLastName = txtApellido2->Text;
			ps->PhoneNumber = txtTelefono->Text;
			ps->PersonalEmail = txtCorreo->Text;
			ps->Username = txtUsuario->Text;
			ps->Password = txtContraseña->Text;
			ps->Birthday = txtBirthday->Text;
			if (pbHuella->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbHuella->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				ps->Huella = ms->ToArray();
			}
			SalesManager::AddPersonal(ps);
			refreshDGVPersonal();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al guardar el producto por error en los datos.");
			return;
		}
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
				ps->DocumentNumber = txtDocumentNumber->Text;
				ps->FirstName = txtNombre1->Text;
				ps->SecondName = txtNombre2->Text;
				ps->FirstLastName = txtApellido1->Text;
				ps->SecondLastName = txtApellido2->Text;
				ps->PhoneNumber = txtTelefono->Text;
				ps->PersonalEmail = txtCorreo->Text;
				ps->Username = txtUsuario->Text;
				ps->Password = txtContraseña->Text;
				ps->Birthday = txtBirthday->Text;

				if (pbHuella->Image != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					pbHuella->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					ps->Huella = ms->ToArray();
				}

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
		String^ Id = "-1";
		try {
			if (txtDocumentNumber->Text->Trim() == "") {
				MessageBox::Show("No se puede eliminar porque no hay ningún empleado seleccionado.");
				return;
			}
			Id = txtDocumentNumber->Text;
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
						personalList[i]->DocumentNumber,
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
private: System::Void dgvPersonal_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvPersonal->CurrentCell != nullptr &&
		dgvPersonal->CurrentCell->Value != nullptr &&
		dgvPersonal->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvPersonal->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvPersonal->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[5]->Value->ToString();

		String^ personalID = a;
		Personal^ personal = SalesManager::QueryPersonalByDocumentNumber(personalID);
		//MessageBox::Show(customer->ToString());
		if (personal != nullptr) {
			txtDocumentNumber->Text = personal->DocumentNumber;
			txtNombre1->Text = personal->FirstName;
			txtNombre2->Text = personal->SecondName;
			txtApellido1->Text = personal->FirstLastName;
			txtApellido2->Text = personal->SecondLastName;
			txtTelefono->Text = personal->PhoneNumber;
			txtCorreo->Text = personal->PersonalEmail;
			txtUsuario->Text = personal->Username;
			txtContraseña->Text = personal->Password;
			txtBirthday->Text = personal->Birthday;
			txtEstado->Text = "Habilitado";

			if (personal->Huella != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(personal->Huella);
				pbHuella->Image = Image::FromStream(ms);
			}
			else {
				pbHuella->Image = nullptr;
				pbHuella->Invalidate();
			}
		}
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	Personal^ ps = gcnew Personal();
	try {
		if (txtDocumentNumber->Text->Trim() == "") {
			refreshDGVPersonal();
			ClearControls();
			return;
		}
		ps->DocumentNumber = txtDocumentNumber->Text;
		ps->FirstName = txtNombre1->Text;
		ps->SecondName = txtNombre2->Text;
		ps->FirstLastName = txtApellido1->Text;
		ps->SecondLastName = txtApellido2->Text;
		ps->PhoneNumber = txtTelefono->Text;
		ps->PersonalEmail = txtCorreo->Text;
		ps->Username = txtUsuario->Text;
		ps->Password = txtContraseña->Text;
		ps->Birthday = txtBirthday->Text;
		dgvPersonal->Rows->Clear();
		List<Personal^>^ personalList = SalesManager::QueryPersonal();
		for (int i = 0; i < personalList->Count; i++) {
			if (ps->Id == personalList[i]->Id)
			{
				dgvPersonal->Rows->Add(gcnew array<String^>{
					personalList[i]->FirstName,
						personalList[i]->SecondName,
						personalList[i]->FirstLastName,
						personalList[i]->SecondLastName,
						personalList[i]->PhoneNumber,
						personalList[i]->DocumentNumber,
						personalList[i]->PersonalEmail,
						personalList[i]->Username,
						personalList[i]->Password,
						personalList[i]->Birthday,
				});
				if (personalList[i]->Huella != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(personalList[i]->Huella);
					pbHuella->Image = Image::FromStream(ms);
				}
				else {
					pbHuella->Image = nullptr;
					pbHuella->Invalidate();
				}
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Error al guardar el personal por error en los datos.");
		return;
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	pbHuella->Image = nullptr;
}
private: System::Void btnAllView_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshDGVPersonal();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog ^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbHuella->Image = gcnew Bitmap(opnfd->FileName);
	}
}
};
}
