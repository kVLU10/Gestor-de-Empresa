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
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::ComboBox^ comboBoxArea;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBoxCargo;


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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DocumentNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contraseña;
	private: System::Windows::Forms::TextBox^ txtBirthday;
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
			this->txtBirthday = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBoxArea = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxCargo = (gcnew System::Windows::Forms::ComboBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtDocumentNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido2 = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido1 = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dgvPersonal = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DocumentNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contraseña = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cumpleaños = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPersonal->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(770, 781);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPersonal
			// 
			this->tabPersonal->Controls->Add(this->panel1);
			this->tabPersonal->Controls->Add(this->panel2);
			this->tabPersonal->Location = System::Drawing::Point(4, 22);
			this->tabPersonal->Name = L"tabPersonal";
			this->tabPersonal->Padding = System::Windows::Forms::Padding(3);
			this->tabPersonal->Size = System::Drawing::Size(762, 755);
			this->tabPersonal->TabIndex = 0;
			this->tabPersonal->Text = L"Personal";
			this->tabPersonal->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtBirthday);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->comboBoxArea);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->comboBoxCargo);
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
			this->panel1->Size = System::Drawing::Size(565, 302);
			this->panel1->TabIndex = 0;
			// 
			// txtBirthday
			// 
			this->txtBirthday->Location = System::Drawing::Point(375, 250);
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
			this->label22->Location = System::Drawing::Point(372, 233);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(108, 13);
			this->label22->TabIndex = 52;
			this->label22->Text = L"Fecha de Nacimiento";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(193, 233);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 13);
			this->label21->TabIndex = 51;
			this->label21->Text = L"Área";
			// 
			// comboBoxArea
			// 
			this->comboBoxArea->FormattingEnabled = true;
			this->comboBoxArea->Location = System::Drawing::Point(196, 249);
			this->comboBoxArea->Name = L"comboBoxArea";
			this->comboBoxArea->Size = System::Drawing::Size(124, 21);
			this->comboBoxArea->TabIndex = 50;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 233);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 13);
			this->label20->TabIndex = 49;
			this->label20->Text = L"Cargo";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(372, 157);
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
			// comboBoxCargo
			// 
			this->comboBoxCargo->FormattingEnabled = true;
			this->comboBoxCargo->Location = System::Drawing::Point(3, 249);
			this->comboBoxCargo->Name = L"comboBoxCargo";
			this->comboBoxCargo->Size = System::Drawing::Size(124, 21);
			this->comboBoxCargo->TabIndex = 40;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(375, 173);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(124, 20);
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
			// panel2
			// 
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(753, 749);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->btnDelete);
			this->panel4->Controls->Add(this->btnUpdate);
			this->panel4->Controls->Add(this->btnAdd);
			this->panel4->Location = System::Drawing::Point(2, 312);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(643, 50);
			this->panel4->TabIndex = 1;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(468, 13);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(126, 23);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(262, 12);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(126, 24);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PersonalForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(51, 13);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(126, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PersonalForm::btnAdd_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dgvPersonal);
			this->panel3->Location = System::Drawing::Point(0, 368);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(753, 292);
			this->panel3->TabIndex = 0;
			// 
			// dgvPersonal
			// 
			this->dgvPersonal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersonal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Nombre1,
					this->Nombre2, this->Apellido1, this->Apellido2, this->Telefono, this->DocumentNumber, this->Correo, this->Contraseña, this->Cumpleaños
			});
			this->dgvPersonal->Location = System::Drawing::Point(3, 0);
			this->dgvPersonal->Name = L"dgvPersonal";
			this->dgvPersonal->Size = System::Drawing::Size(742, 286);
			this->dgvPersonal->TabIndex = 0;
			this->dgvPersonal->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellContentClick);
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
			// Contraseña
			// 
			this->Contraseña->HeaderText = L"Contraseña";
			this->Contraseña->Name = L"Contraseña";
			// 
			// Cumpleaños
			// 
			this->Cumpleaños->HeaderText = L"Cumpleaños";
			this->Cumpleaños->Name = L"Cumpleaños";
			// 
			// PersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 749);
			this->Controls->Add(this->tabControl1);
			this->Name = L"PersonalForm";
			this->Text = L"Personal";
			this->tabControl1->ResumeLayout(false);
			this->tabPersonal->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
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
					 personalList[i]->Password,
					 personalList[i]->Birthday
				});
			}
		}

};
}
