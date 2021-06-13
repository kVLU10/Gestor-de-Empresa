#pragma once

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lbNamStore;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ tboxName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameStore;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ instock;
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
			this->tboxid = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tboxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAllView = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Habilitado", L"Desabilitado", L"Repleto" });
			this->comboBox1->Location = System::Drawing::Point(167, 32);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(307, 21);
			this->comboBox1->TabIndex = 31;
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
			// ProductsStoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 523);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAllView);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxid);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->comboBoxStatus);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lbNamStore);
			this->Controls->Add(this->textBox2);
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
};
}
