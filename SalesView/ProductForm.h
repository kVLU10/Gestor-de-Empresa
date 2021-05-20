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
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtPrice;
	protected:

	private: System::Windows::Forms::TextBox^ txtBonusPoints;
	private: System::Windows::Forms::TextBox^ txtBrand;
	private: System::Windows::Forms::TextBox^ txtId;



	private: System::Windows::Forms::TextBox^ txtDescription;


	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::Label^ lblBrand;

	private: System::Windows::Forms::Label^ lblBonusPoints;
	private: System::Windows::Forms::Label^ lblPrice;



	private: System::Windows::Forms::Label^ lblCode;
	private: System::Windows::Forms::Label^ lblDescription;


	private: System::Windows::Forms::Label^ lblName;



	private: System::Windows::Forms::TabControl^ tabProducts;
	private: System::Windows::Forms::DataGridView^ dgvProducts;

	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdds;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BonusPoints;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;







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
		void InitializeComponent(void) {
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdds = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtBonusPoints = (gcnew System::Windows::Forms::TextBox());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblBrand = (gcnew System::Windows::Forms::Label());
			this->lblBonusPoints = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblCode = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BonusPoints = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabProducts = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->tabProducts->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage1->Size = System::Drawing::Size(1183, 589);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Productos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnDelete);
			this->panel2->Controls->Add(this->btnUpdate);
			this->panel2->Controls->Add(this->btnAdds);
			this->panel2->Location = System::Drawing::Point(4, 183);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(944, 64);
			this->panel2->TabIndex = 17;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(715, 16);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(153, 28);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(405, 16);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(153, 28);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnAdds
			// 
			this->btnAdds->Location = System::Drawing::Point(84, 16);
			this->btnAdds->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAdds->Name = L"btnAdds";
			this->btnAdds->Size = System::Drawing::Size(153, 28);
			this->btnAdds->TabIndex = 12;
			this->btnAdds->Text = L"&Agregar";
			this->btnAdds->UseVisualStyleBackColor = true;
			this->btnAdds->Click += gcnew System::EventHandler(this, &ProductForm::btnAdds_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtPrice);
			this->panel1->Controls->Add(this->txtBonusPoints);
			this->panel1->Controls->Add(this->txtBrand);
			this->panel1->Controls->Add(this->txtId);
			this->panel1->Controls->Add(this->txtDescription);
			this->panel1->Controls->Add(this->txtName);
			this->panel1->Controls->Add(this->lblBrand);
			this->panel1->Controls->Add(this->lblBonusPoints);
			this->panel1->Controls->Add(this->lblPrice);
			this->panel1->Controls->Add(this->lblCode);
			this->panel1->Controls->Add(this->lblDescription);
			this->panel1->Controls->Add(this->lblName);
			this->panel1->Location = System::Drawing::Point(5, 5);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(944, 171);
			this->panel1->TabIndex = 16;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(696, 117);
			this->txtPrice->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(132, 22);
			this->txtPrice->TabIndex = 11;
			// 
			// txtBonusPoints
			// 
			this->txtBonusPoints->Location = System::Drawing::Point(696, 57);
			this->txtBonusPoints->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtBonusPoints->Name = L"txtBonusPoints";
			this->txtBonusPoints->Size = System::Drawing::Size(132, 22);
			this->txtBonusPoints->TabIndex = 10;
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(372, 117);
			this->txtBrand->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(267, 22);
			this->txtBrand->TabIndex = 9;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(41, 57);
			this->txtId->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(224, 22);
			this->txtId->TabIndex = 8;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(41, 117);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(269, 22);
			this->txtDescription->TabIndex = 7;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(372, 57);
			this->txtName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(269, 22);
			this->txtName->TabIndex = 6;
			// 
			// lblBrand
			// 
			this->lblBrand->AutoSize = true;
			this->lblBrand->Location = System::Drawing::Point(368, 97);
			this->lblBrand->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBrand->Name = L"lblBrand";
			this->lblBrand->Size = System::Drawing::Size(47, 17);
			this->lblBrand->TabIndex = 5;
			this->lblBrand->Text = L"Marca";
			// 
			// lblBonusPoints
			// 
			this->lblBonusPoints->AutoSize = true;
			this->lblBonusPoints->Location = System::Drawing::Point(692, 37);
			this->lblBonusPoints->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBonusPoints->Name = L"lblBonusPoints";
			this->lblBonusPoints->Size = System::Drawing::Size(96, 17);
			this->lblBonusPoints->TabIndex = 4;
			this->lblBonusPoints->Text = L"Puntos Bonus";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(692, 97);
			this->lblPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(48, 17);
			this->lblPrice->TabIndex = 3;
			this->lblPrice->Text = L"Precio";
			// 
			// lblCode
			// 
			this->lblCode->AutoSize = true;
			this->lblCode->Location = System::Drawing::Point(37, 37);
			this->lblCode->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCode->Name = L"lblCode";
			this->lblCode->Size = System::Drawing::Size(52, 17);
			this->lblCode->TabIndex = 2;
			this->lblCode->Text = L"Código";
			this->lblCode->Click += gcnew System::EventHandler(this, &ProductForm::lblCode_Click);
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(37, 97);
			this->lblDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(82, 17);
			this->lblDescription->TabIndex = 1;
			this->lblDescription->Text = L"Descripción";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(368, 37);
			this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(58, 17);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Nombre";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dgvProducts);
			this->panel3->Location = System::Drawing::Point(4, 255);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1100, 319);
			this->panel3->TabIndex = 18;
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Id, this->NameProduct,
					this->Brand, this->BonusPoints, this->Description, this->Price, this->Status
			});
			this->dgvProducts->Location = System::Drawing::Point(43, 23);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->Size = System::Drawing::Size(993, 276);
			this->dgvProducts->TabIndex = 15;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Código";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// NameProduct
			// 
			this->NameProduct->HeaderText = L"Nombre";
			this->NameProduct->MinimumWidth = 6;
			this->NameProduct->Name = L"NameProduct";
			this->NameProduct->Width = 125;
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->MinimumWidth = 6;
			this->Brand->Name = L"Brand";
			this->Brand->Width = 125;
			// 
			// BonusPoints
			// 
			this->BonusPoints->HeaderText = L"Puntos Bonus";
			this->BonusPoints->MinimumWidth = 6;
			this->BonusPoints->Name = L"BonusPoints";
			this->BonusPoints->Width = 125;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripción";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->Width = 125;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado";
			this->Status->MinimumWidth = 6;
			this->Status->Name = L"Status";
			this->Status->Width = 125;
			// 
			// tabProducts
			// 
			this->tabProducts->Controls->Add(this->tabPage1);
			this->tabProducts->Location = System::Drawing::Point(16, 15);
			this->tabProducts->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabProducts->Name = L"tabProducts";
			this->tabProducts->SelectedIndex = 0;
			this->tabProducts->Size = System::Drawing::Size(1191, 618);
			this->tabProducts->TabIndex = 0;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1175, 647);
			this->Controls->Add(this->tabProducts);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ProductForm";
			this->Text = L"Productos";
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->tabProducts->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdds_Click(System::Object^ sender, System::EventArgs^ e) {
		Products^ p = gcnew Products();
		try {
			if (txtPrice->Text->Trim() == "") {
				MessageBox::Show("El precio no debe estar vacío.");
				return;
			}
			/*
			if (txtStock->Text->Trim() == "") {
				MessageBox::Show("El stock no debe estar vacío.");
				return;
			}
			*/
			p->Id = Int32::Parse(txtId->Text);
			p->Name = txtName->Text;
			p->Description = txtDescription->Text;
			p->BonusPoints = Int32::Parse(txtBonusPoints->Text);
			p->Precio = Double::Parse(txtPrice->Text);
			p->Marca = txtBrand->Text;
			p->Status = "Habilitado";
			/*
			int id = Int32::Parse(txtId->Text);
			String^ name = txtName->Text;
			int bonusPoints = Int32::Parse(txtBonusPoints->Text);
			String^ description = txtDescription->Text;
			String^ brand = txtBrand->Text;
			double price = Double::Parse(txtPrice->Text);
			*/

			//Products^ p = gcnew Products(id, name, description, bonusPoints, price, brand, "Habilitado");
			SalesManager::AddProduct(p);
			RefreshDGVProducts();
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al guardar el producto por error en los datos.");
			return;
		}
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int productId = -1;
		try {
			if (txtId->Text->Trim() == "") {
				MessageBox::Show("No se puede eliminar porque no hay ningún producto seleccionado.");
				return;
			}
			productId = Int32::Parse(txtId->Text);
		}
		catch (...) {
			MessageBox::Show("No se puede eliminar el producto porque el Id no es válido.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de eliminar el producto?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			SalesManager::DeleteProduct(productId);
			RefreshDGVProducts();
			ClearControls();
		}
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vacío.");
			return;
		}
		if (txtPrice->Text->Trim() == "") {
			MessageBox::Show("El precio no debe estar vacío.");
			return;
		}
		if (MessageBox::Show(
			"¿Está seguro de actualizar el producto?",
			"Confirmación", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			Products^ p = gcnew Products();
			try {
				p->Id = Int32::Parse(txtId->Text);
				p->Name = txtName->Text;
				p->Description = txtDescription->Text;
				p->Precio = Double::Parse(txtPrice->Text);
				p->BonusPoints = Int32::Parse(txtBonusPoints->Text);
				p->Status = "Habilitado";
				p->Marca = txtBrand->Text;
				SalesManager::UpdateProduct(p);
				RefreshDGVProducts();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al grabar.");
				return;
			}
		}
	}

	public:
		void RefreshDGVProducts() {
			List<Products^>^ productList = SalesManager::QueryProducts();
			dgvProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++)
				dgvProducts->Rows->Add(gcnew array<String^>{
				"" + productList[i]->Id,
					productList[i]->Name,
					productList[i]->Marca,
					"" + productList[i]->BonusPoints,
					productList[i]->Description,
					"" + productList[i]->Precio,
					productList[i]->Status,
			});
		}
		System::Void ClearControls() {
			txtId->Clear();
			txtName->Clear();
			txtBrand->Clear();
			txtBonusPoints->Clear();
			txtDescription->Clear();
			txtPrice->Clear();
		}
	private: System::Void lblCode_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}