#pragma once

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
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lbNamStore;
	private: System::Windows::Forms::Label^ LbDistrit;





	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnAddP;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lbNamStore = (gcnew System::Windows::Forms::Label());
			this->LbDistrit = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAddP = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->tboxid = (gcnew System::Windows::Forms::TextBox());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameStore = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->distrit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tboxName
			// 
			this->tboxName->Location = System::Drawing::Point(96, 113);
			this->tboxName->Name = L"tboxName";
			this->tboxName->Size = System::Drawing::Size(387, 22);
			this->tboxName->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(387, 22);
			this->textBox2->TabIndex = 1;
			// 
			// lbNamStore
			// 
			this->lbNamStore->AutoSize = true;
			this->lbNamStore->Location = System::Drawing::Point(29, 116);
			this->lbNamStore->Name = L"lbNamStore";
			this->lbNamStore->Size = System::Drawing::Size(58, 17);
			this->lbNamStore->TabIndex = 3;
			this->lbNamStore->Text = L"Nombre";
			this->lbNamStore->Click += gcnew System::EventHandler(this, &StoreForm::label1_Click);
			// 
			// LbDistrit
			// 
			this->LbDistrit->AutoSize = true;
			this->LbDistrit->Location = System::Drawing::Point(29, 165);
			this->LbDistrit->Name = L"LbDistrit";
			this->LbDistrit->Size = System::Drawing::Size(52, 17);
			this->LbDistrit->TabIndex = 4;
			this->LbDistrit->Text = L"Distrito";
			this->LbDistrit->Click += gcnew System::EventHandler(this, &StoreForm::label2_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(96, 221);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(118, 33);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(229, 221);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(118, 33);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(362, 221);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(118, 33);
			this->btnDelete->TabIndex = 7;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAddP
			// 
			this->btnAddP->Location = System::Drawing::Point(541, 221);
			this->btnAddP->Name = L"btnAddP";
			this->btnAddP->Size = System::Drawing::Size(183, 33);
			this->btnAddP->TabIndex = 8;
			this->btnAddP->Text = L"Agregar Productos";
			this->btnAddP->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(576, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 132);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StoreForm::pictureBox1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->NameStore,
					this->distrit, this->Status
			});
			this->dataGridView1->Location = System::Drawing::Point(96, 297);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(554, 150);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dataGridView1_CellContentClick);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(676, 297);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(118, 33);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"&Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->FormattingEnabled = true;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Habilitado", L"Desabilitado", L"Repleto" });
			this->comboBoxStatus->Location = System::Drawing::Point(362, 63);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(121, 24);
			this->comboBoxStatus->TabIndex = 12;
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Location = System::Drawing::Point(295, 66);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(52, 17);
			this->lbStatus->TabIndex = 13;
			this->lbStatus->Text = L"Estado";
			// 
			// tboxid
			// 
			this->tboxid->Location = System::Drawing::Point(96, 63);
			this->tboxid->Name = L"tboxid";
			this->tboxid->Size = System::Drawing::Size(178, 22);
			this->tboxid->TabIndex = 14;
			this->tboxid->TextChanged += gcnew System::EventHandler(this, &StoreForm::textBox3_TextChanged);
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(68, 63);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(19, 17);
			this->lbId->TabIndex = 15;
			this->lbId->Text = L"Id";
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
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 515);
			this->Controls->Add(this->lbId);
			this->Controls->Add(this->tboxid);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAddP);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->LbDistrit);
			this->Controls->Add(this->lbNamStore);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tboxName);
			this->Name = L"StoreForm";
			this->Text = L"StoreForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
