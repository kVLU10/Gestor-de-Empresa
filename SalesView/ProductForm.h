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
		void InitializeComponent(void){
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BonusPoints = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdds = (gcnew System::Windows::Forms::Button());
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
			this->tabProducts = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->tabProducts->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgvProducts);
			this->tabPage1->Controls->Add(this->btnDelete);
			this->tabPage1->Controls->Add(this->btnUpdate);
			this->tabPage1->Controls->Add(this->btnAdds);
			this->tabPage1->Controls->Add(this->txtPrice);
			this->tabPage1->Controls->Add(this->txtBonusPoints);
			this->tabPage1->Controls->Add(this->txtBrand);
			this->tabPage1->Controls->Add(this->txtId);
			this->tabPage1->Controls->Add(this->txtDescription);
			this->tabPage1->Controls->Add(this->txtName);
			this->tabPage1->Controls->Add(this->lblBrand);
			this->tabPage1->Controls->Add(this->lblBonusPoints);
			this->tabPage1->Controls->Add(this->lblPrice);
			this->tabPage1->Controls->Add(this->lblCode);
			this->tabPage1->Controls->Add(this->lblDescription);
			this->tabPage1->Controls->Add(this->lblName);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(885, 476);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Productos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &ProductForm::tabPage1_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Id, this->NameProduct,
					this->Brand, this->BonusPoints, this->Description, this->Price, this->Status
			});
			this->dgvProducts->Location = System::Drawing::Point(66, 222);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->Size = System::Drawing::Size(745, 224);
			this->dgvProducts->TabIndex = 15;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Código";
			this->Id->Name = L"Id";
			// 
			// NameProduct
			// 
			this->NameProduct->HeaderText = L"Nombre";
			this->NameProduct->Name = L"NameProduct";
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->Name = L"Brand";
			// 
			// BonusPoints
			// 
			this->BonusPoints->HeaderText = L"Puntos Bonus";
			this->BonusPoints->Name = L"BonusPoints";
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripción";
			this->Description->Name = L"Description";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->Name = L"Price";
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado";
			this->Status->Name = L"Status";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(539, 162);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(115, 23);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(307, 162);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(115, 23);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"&Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdds
			// 
			this->btnAdds->Location = System::Drawing::Point(66, 162);
			this->btnAdds->Name = L"btnAdds";
			this->btnAdds->Size = System::Drawing::Size(115, 23);
			this->btnAdds->TabIndex = 12;
			this->btnAdds->Text = L"&Agregar";
			this->btnAdds->UseVisualStyleBackColor = true;
			this->btnAdds->Click += gcnew System::EventHandler(this, &ProductForm::btnAdds_Click);
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(526, 99);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 20);
			this->txtPrice->TabIndex = 11;
			// 
			// txtBonusPoints
			// 
			this->txtBonusPoints->Location = System::Drawing::Point(526, 50);
			this->txtBonusPoints->Name = L"txtBonusPoints";
			this->txtBonusPoints->Size = System::Drawing::Size(100, 20);
			this->txtBonusPoints->TabIndex = 10;
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(283, 99);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(201, 20);
			this->txtBrand->TabIndex = 9;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(35, 50);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(169, 20);
			this->txtId->TabIndex = 8;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(35, 99);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(203, 20);
			this->txtDescription->TabIndex = 7;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(283, 50);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(203, 20);
			this->txtName->TabIndex = 6;
			// 
			// lblBrand
			// 
			this->lblBrand->AutoSize = true;
			this->lblBrand->Location = System::Drawing::Point(280, 83);
			this->lblBrand->Name = L"lblBrand";
			this->lblBrand->Size = System::Drawing::Size(37, 13);
			this->lblBrand->TabIndex = 5;
			this->lblBrand->Text = L"Marca";
			// 
			// lblBonusPoints
			// 
			this->lblBonusPoints->AutoSize = true;
			this->lblBonusPoints->Location = System::Drawing::Point(523, 34);
			this->lblBonusPoints->Name = L"lblBonusPoints";
			this->lblBonusPoints->Size = System::Drawing::Size(73, 13);
			this->lblBonusPoints->TabIndex = 4;
			this->lblBonusPoints->Text = L"Puntos Bonus";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(523, 83);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(37, 13);
			this->lblPrice->TabIndex = 3;
			this->lblPrice->Text = L"Precio";
			// 
			// lblCode
			// 
			this->lblCode->AutoSize = true;
			this->lblCode->Location = System::Drawing::Point(32, 34);
			this->lblCode->Name = L"lblCode";
			this->lblCode->Size = System::Drawing::Size(40, 13);
			this->lblCode->TabIndex = 2;
			this->lblCode->Text = L"Código";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(32, 83);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(63, 13);
			this->lblDescription->TabIndex = 1;
			this->lblDescription->Text = L"Descripción";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(280, 34);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(44, 13);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Nombre";
			// 
			// tabProducts
			// 
			this->tabProducts->Controls->Add(this->tabPage1);
			this->tabProducts->Location = System::Drawing::Point(12, 12);
			this->tabProducts->Name = L"tabProducts";
			this->tabProducts->SelectedIndex = 0;
			this->tabProducts->Size = System::Drawing::Size(893, 502);
			this->tabProducts->TabIndex = 0;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 526);
			this->Controls->Add(this->tabProducts);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->tabProducts->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdds_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(txtId->Text);
		String^ name = txtName->Text;
		int bonusPoints = Int32::Parse(txtBonusPoints->Text);
		String^ description = txtDescription->Text;
		String^ brand = txtBrand->Text;
		double price = Double::Parse(txtPrice->Text);

		Products^ p = gcnew Products(id, name, description, bonusPoints, price, brand, 'A');
		SalesManager::AddProduct(p);
		RefreshDGVProducts();
	}	

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(txtId->Text);
		String^ name = txtName->Text;
		int bonusPoints = Int32::Parse(txtBonusPoints->Text);
		String^ description = txtDescription->Text;
		String^ brand = txtBrand->Text;
		double price = Double::Parse(txtPrice->Text);

		Products^ p = gcnew Products(id, name, description, bonusPoints, price, brand, 'A');
		SalesManager::UpdateProduct(p);
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
									   "" +	productList[i]->BonusPoints,
											productList[i]->Description,
									   "" +	productList[i]->Precio,
									   "" +	productList[i]->Status,
										});
		}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
