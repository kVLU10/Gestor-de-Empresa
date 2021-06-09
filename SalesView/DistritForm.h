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
	/// Resumen de DistritForm
	/// </summary>
	public ref class DistritForm : public System::Windows::Forms::Form
	{
	public:
		DistritForm(void)
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
		~DistritForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnAdd;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"nombre";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(128, 30);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 1;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(44, 117);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DistritForm::btnAdd_Click);
			// 
			// DistritForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 298);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Name = L"DistritForm";
			this->Text = L"DistritForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Distrit^ d = gcnew Distrit();
		d->Name = txtName->Text;
		SalesManager::AddDistrit(d);
	}
	};
}
