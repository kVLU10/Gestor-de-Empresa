#pragma once
#include "ProductForm.h"
#include "StoreForm.h"
#include "PersonalForm.h"
#include "LoginForm.h"



namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:
		static Personal^ personal;
		SalesMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ preferenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transaccionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenesToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->transaccionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1091, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->preferenciasToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"&Archivo";
			this->preferenciasToolStripMenuItem->Name = L"preferenciasToolStripMenuItem";
			this->preferenciasToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->preferenciasToolStripMenuItem->Text = L"&Preferencias";
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->salirToolStripMenuItem->Text = L"&Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->productosToolStripMenuItem,
					this->personalToolStripMenuItem, this->almacenesToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"&Mantenimientos";
			this->mantenimientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::mantenimientosToolStripMenuItem_Click);
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productosToolStripMenuItem_Click);
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::personalToolStripMenuItem_Click);
			this->transaccionesToolStripMenuItem->Name = L"transaccionesToolStripMenuItem";
			this->transaccionesToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->transaccionesToolStripMenuItem->Text = L"&Transacciones";
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"&Reportes";
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"&Ayuda";
			this->almacenesToolStripMenuItem->Name = L"almacenesToolStripMenuItem";
			this->almacenesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->almacenesToolStripMenuItem->Text = L"Almacenes";
			this->almacenesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::almacenesToolStripMenuItem_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 1045);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"SalesMainForm";
			this->Text = L"SalesMainForm";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductForm^ productForm = gcnew ProductForm();
		productForm->MdiParent = this;
		productForm->Show();
	}
	private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (personal == nullptr) {
			LoginForm^ loginForm = gcnew LoginForm();
			loginForm->ControlBox = false;
			loginForm->Text = "";
			loginForm->ShowDialog();
		}
	}
	private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonalForm^ personalForm = gcnew PersonalForm();
		personalForm->MdiParent = this;
		personalForm->Show();
	}
	private: System::Void almacenesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		StoreForm^ storeForm = gcnew StoreForm();
		storeForm->MdiParent = this;
		storeForm->Show();

	}


private: System::Void mantenimientosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
