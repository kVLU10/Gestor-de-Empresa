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
	/// Resumen de CategoriesForm
	/// </summary>
	public ref class CategoriesForm : public System::Windows::Forms::Form
	{
	public:
		CategoriesForm(void)
		{
			InitializeComponent();
			refreshDGVCategories();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CategoriesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dgvCategories;









	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;


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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dgvCategories = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCategories))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(13, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(729, 628);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(721, 602);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(715, 446);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txtId);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->txtName);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(708, 122);
			this->panel2->TabIndex = 5;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(80, 27);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(80, 73);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->btnSearch);
			this->panel3->Controls->Add(this->btnDelete);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->btnClear);
			this->panel3->Controls->Add(this->btnAdd);
			this->panel3->Location = System::Drawing::Point(3, 131);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(708, 52);
			this->panel3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(493, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Mostar todo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CategoriesForm::button1_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(376, 13);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(82, 23);
			this->btnSearch->TabIndex = 16;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &CategoriesForm::btnSearch_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(252, 13);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(82, 23);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CategoriesForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(134, 13);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(82, 23);
			this->btnUpdate->TabIndex = 4;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CategoriesForm::btnUpdate_Click_1);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(614, 13);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(82, 23);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &CategoriesForm::btnClear_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(15, 13);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(82, 23);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CategoriesForm::btnAdd_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dgvCategories);
			this->panel4->Location = System::Drawing::Point(3, 189);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(708, 250);
			this->panel4->TabIndex = 3;
			// 
			// dgvCategories
			// 
			this->dgvCategories->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCategories->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Id, this->Nombre });
			this->dgvCategories->Location = System::Drawing::Point(15, 13);
			this->dgvCategories->Name = L"dgvCategories";
			this->dgvCategories->RowHeadersWidth = 51;
			this->dgvCategories->Size = System::Drawing::Size(681, 222);
			this->dgvCategories->TabIndex = 1;
			this->dgvCategories->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CategoriesForm::dgvCategories_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 500;
			// 
			// CategoriesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 484);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CategoriesForm";
			this->Text = L"Categoria";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCategories))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Categories^ c = gcnew Categories();

		c->Id = Int32::Parse(txtId->Text);
		c->Name = txtName->Text;
		SalesManager::AddCategories(c);
		refreshDGVCategories();
	}

	public:
		void refreshDGVCategories() {
			List<Categories^>^ categoriesList = SalesManager::QueryCategories();
			dgvCategories->Rows->Clear();
			for (int i = 0; i < categoriesList->Count; i++) {
				dgvCategories->Rows->Add(gcnew array <String^>{

					"" + categoriesList[i]->Id,
					categoriesList[i]->Name,
					
				});
			}
		}
		System::Void ClearControls() {
			txtName->Clear();
			txtId->Clear();
		}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El Nombre de la categoria no debe estar vacío.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de actualizar la categoria?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Categories^ c = gcnew Categories();
			try {
				c->Id = Int32::Parse(txtId->Text);
				c->Name = txtName->Text;


				SalesManager::UpdateCategories(c);
				refreshDGVCategories();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al grabar.");
				return;
			}
		}
	}
	


private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	int Id = -1;
	String^ Name="";
	try {
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ninguna categoria seleccionado.");
			return;
		}
		Id = Int32::Parse(txtId->Text);
		//Name = (txtName->Text);
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar la categorias porque el Id no es válido.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de eliminar la categorias?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteCategories(Id);

		refreshDGVCategories();
		ClearControls();
	}


}
private: System::Void btnUpdate_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (txtName->Text->Trim() == "") {
		MessageBox::Show("El Nombre de la categoria no debe estar vacío.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de actualizar la categoria?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Categories^ c = gcnew Categories();
		try {
			c->Id = Int32::Parse(txtId->Text);
			c->Name = txtName->Text;


			SalesManager::UpdateCategories(c);
			refreshDGVCategories();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al grabar.");
			return;
		}
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();

}
private: System::Void dgvCategories_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCategories->CurrentCell != nullptr &&
		dgvCategories->CurrentCell->Value != nullptr &&
		dgvCategories->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvCategories->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCategories->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int categoriesID = Int32::Parse(a);
		Categories^ categories = SalesManager::QueryCategoriesById(categoriesID);
		//MessageBox::Show(customer->ToString());
		if (categories != nullptr) {
			txtId->Text = "" + categories->Id;
			txtName->Text = categories->Name;
			
		}
	}

}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	Categories^ c = gcnew Categories();
	try {
		if (txtId->Text->Trim() == "") {
			refreshDGVCategories();
			ClearControls();
			return;
		}
		c->Id = Int32::Parse(txtId->Text);
		//c->Id = Int32::Parse(txtDocumentNumber->Text);
		c->Name = txtName->Text;
		

		dgvCategories->Rows->Clear();
		List<Categories^>^ categoriesList = SalesManager::QueryCategories();
		for (int i = 0; i < categoriesList->Count; i++) {
			if (c->Id == categoriesList[i]->Id)
				dgvCategories->Rows->Add(gcnew array<String^>{
					"" + categoriesList[i]->Id,
						 categoriesList[i]->Name,
			});
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Error al guardar al Cliente por error en los datos.");
		return;
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshDGVCategories();
}
};
}
