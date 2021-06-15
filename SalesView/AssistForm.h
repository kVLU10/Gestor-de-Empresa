#pragma once
#include "ComboBoxIdItem.h"

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
	/// Resumen de AssistForm
	/// </summary>
	public ref class AssistForm : public System::Windows::Forms::Form
	{
	public:
		AssistForm(void)
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
		~AssistForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ cmbPersonal;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbPersonal = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre del personal";
			// 
			// cmbPersonal
			// 
			this->cmbPersonal->FormattingEnabled = true;
			this->cmbPersonal->Location = System::Drawing::Point(136, 49);
			this->cmbPersonal->Name = L"cmbPersonal";
			this->cmbPersonal->Size = System::Drawing::Size(303, 21);
			this->cmbPersonal->TabIndex = 1;
			// 
			// AssistForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 361);
			this->Controls->Add(this->cmbPersonal);
			this->Controls->Add(this->label1);
			this->Name = L"AssistForm";
			this->Text = L"Asistencia";
			this->Load += gcnew System::EventHandler(this, &AssistForm::AssistForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void AddCmbPersonal() {
		List <Personal^>^ personalList = SalesManager::QueryPersonal();
		for (int i = 0; i < personalList->Count; i++) {
			cmbPersonal->Items->Add(gcnew ComboBoxIdItem(personalList[i]->FirstName + " " + personalList[i]->FirstLastName, personalList[i]->Id));
		}
	}

	private: System::Void AssistForm_Load(System::Object^ sender, System::EventArgs^ e) {
		AddCmbPersonal();
	}
	};
}
