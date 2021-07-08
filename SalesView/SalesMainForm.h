#pragma once
#include "ProductForm.h"
#include "StoreForm.h"
#include "SalesForm.h"
#include "PersonalForm.h"
#include "LoginForm.h"
#include "ClientForm.h"
#include "DistritForm.h"
#include "CategoriesForm.h"
#include "AssistForm.h"
#include "GraphicsForm.h"


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
		static Person^ person;
		SalesMainForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ categoriasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asistenciaToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->categoriasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientosToolStripMenuItem, this->transaccionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1455, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->preferenciasToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"&Archivo";
			// 
			// preferenciasToolStripMenuItem
			// 
			this->preferenciasToolStripMenuItem->Name = L"preferenciasToolStripMenuItem";
			this->preferenciasToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->preferenciasToolStripMenuItem->Text = L"&Preferencias";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->salirToolStripMenuItem->Text = L"&Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->productosToolStripMenuItem,
					this->personalToolStripMenuItem, this->clientesToolStripMenuItem, this->almacenesToolStripMenuItem, this->categoriasToolStripMenuItem,
					this->asistenciaToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"&Mantenimientos";
			this->mantenimientosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::mantenimientosToolStripMenuItem_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productosToolStripMenuItem_Click);
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::personalToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::clientesToolStripMenuItem_Click);
			// 
			// almacenesToolStripMenuItem
			// 
			this->almacenesToolStripMenuItem->Name = L"almacenesToolStripMenuItem";
			this->almacenesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->almacenesToolStripMenuItem->Text = L"Almacenes";
			this->almacenesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::almacenesToolStripMenuItem_Click);
			// 
			// categoriasToolStripMenuItem
			// 
			this->categoriasToolStripMenuItem->Name = L"categoriasToolStripMenuItem";
			this->categoriasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->categoriasToolStripMenuItem->Text = L"Categorias";
			this->categoriasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::categoriasToolStripMenuItem_Click);
			//
			// asistenciaToolStripMenuItem
			// 
			this->asistenciaToolStripMenuItem->Name = L"asistenciaToolStripMenuItem";
			this->asistenciaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->asistenciaToolStripMenuItem->Text = L"Asistencia";
			this->asistenciaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::asistenciaToolStripMenuItem_Click);
			// 
			// transaccionesToolStripMenuItem
			// 
			this->transaccionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ventasToolStripMenuItem });
			this->transaccionesToolStripMenuItem->Name = L"transaccionesToolStripMenuItem";
			this->transaccionesToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->transaccionesToolStripMenuItem->Text = L"&Transacciones";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"&Reportes";
			this->reportesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::reportesToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"&Ayuda";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			this->ventasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::ventasToolStripMenuItem_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1455, 922);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
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
		SalesController::DBController::Init();
		if (person == nullptr) {
			LoginForm^ loginForm = gcnew LoginForm();
			loginForm->ControlBox = false;
			loginForm->Text = "";
			loginForm->ShowDialog();
		}
	}
	private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonalForm^ personalForm = gcnew PersonalForm();
		//DistritForm^ distritForm = gcnew DistritForm();//
		personalForm->MdiParent = this;
		personalForm->Show();
		//distritForm->MdiParent = this;//
		//distritForm->Show();//

	}
	private: System::Void almacenesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		StoreForm^ storeForm = gcnew StoreForm();
		storeForm->MdiParent = this;
		storeForm->Show();

	}

	private: System::Void mantenimientosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientForm^ clientForm = gcnew ClientForm();
		clientForm->MdiParent = this;
		clientForm->Show();
	}
	private: System::Void categoriasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CategoriesForm^ categoriesForm = gcnew CategoriesForm();
		categoriesForm->MdiParent = this;
		categoriesForm->Show();
	
	}

	private: System::Void ventasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SalesForm^ salesForm = gcnew SalesForm();
		salesForm->MdiParent = this;
		salesForm->Show();
	}
	private: System::Void asistenciaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AssistForm^ assistForm = gcnew AssistForm();
		assistForm->MdiParent = this;
		assistForm->Show();
	}
private: System::Void reportesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphicsForm^ graphicsForm = gcnew GraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();
}
}
; };


