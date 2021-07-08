#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <time.h>
#include "ComboBoxIdItem.h"
#include "ComboBoxItem.h"
#include "ComboBoxItem1.h"

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

	protected:

	private: System::Windows::Forms::Button^ btnHuella;
	private: System::Windows::Forms::PictureBox^ pbHuella;
	private: System::Windows::Forms::Button^ btnFalta;
	private: System::Windows::Forms::TextBox^ txtHora;
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
			this->btnHuella = (gcnew System::Windows::Forms::Button());
			this->pbHuella = (gcnew System::Windows::Forms::PictureBox());
			this->btnFalta = (gcnew System::Windows::Forms::Button());
			this->txtHora = (gcnew System::Windows::Forms::TextBox());
			this->cmbPersonal = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuella))->BeginInit();
			this->SuspendLayout();
			// 
			// btnHuella
			// 
			this->btnHuella->Location = System::Drawing::Point(87, 105);
			this->btnHuella->Name = L"btnHuella";
			this->btnHuella->Size = System::Drawing::Size(68, 68);
			this->btnHuella->TabIndex = 2;
			this->btnHuella->Text = L"&Huella";
			this->btnHuella->UseVisualStyleBackColor = true;
			this->btnHuella->Click += gcnew System::EventHandler(this, &AssistForm::btnHuella_Click);
			// 
			// pbHuella
			// 
			this->pbHuella->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbHuella->Location = System::Drawing::Point(176, 94);
			this->pbHuella->Name = L"pbHuella";
			this->pbHuella->Size = System::Drawing::Size(86, 92);
			this->pbHuella->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbHuella->TabIndex = 3;
			this->pbHuella->TabStop = false;
			// 
			// btnFalta
			// 
			this->btnFalta->Location = System::Drawing::Point(108, 203);
			this->btnFalta->Name = L"btnFalta";
			this->btnFalta->Size = System::Drawing::Size(119, 42);
			this->btnFalta->TabIndex = 4;
			this->btnFalta->Text = L"13:00pm";
			this->btnFalta->UseVisualStyleBackColor = true;
			this->btnFalta->Click += gcnew System::EventHandler(this, &AssistForm::btnFalta_Click);
			// 
			// txtHora
			// 
			this->txtHora->Location = System::Drawing::Point(117, 53);
			this->txtHora->Name = L"txtHora";
			this->txtHora->Size = System::Drawing::Size(110, 20);
			this->txtHora->TabIndex = 5;
			// 
			// cmbPersonal
			// 
			this->cmbPersonal->FormattingEnabled = true;
			this->cmbPersonal->Location = System::Drawing::Point(21, 12);
			this->cmbPersonal->Name = L"cmbPersonal";
			this->cmbPersonal->Size = System::Drawing::Size(299, 21);
			this->cmbPersonal->TabIndex = 6;
			// 
			// AssistForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 275);
			this->Controls->Add(this->cmbPersonal);
			this->Controls->Add(this->txtHora);
			this->Controls->Add(this->btnFalta);
			this->Controls->Add(this->pbHuella);
			this->Controls->Add(this->btnHuella);
			this->Name = L"AssistForm";
			this->Text = L"Asistencia";
			this->Load += gcnew System::EventHandler(this, &AssistForm::AssistForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuella))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void AddCmbPersonal() {
		cmbPersonal->Items->Clear();
		List <Personal^>^ personalList = SalesManager::QueryPersonal();
		for (int i = 0; i < personalList->Count; i++) {
			cmbPersonal->Items->Add(gcnew ComboBoxItem1(personalList[i]->FirstName + " " + personalList[i]->FirstLastName, personalList[i]->DocumentNumber));
		}
	}

	private: System::Void btnHuella_Click(System::Object^ sender, System::EventArgs^ e) {

		//std::fstream myfile;
		//myfile.open("")
	
		//OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		//opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		//"E:\\Users\\daquino\\Desktop\\Daniel\\PUCP\\Ciclo2021-I\LPOO(INF237-06M1)\Gestor-de-Empresa\SalesView\Resources\DA71440985.jpg";
		
		//if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		//{
			String^ personalDocument = ((ComboBoxItem1^)cmbPersonal->SelectedItem)->Value;
			Personal^ personal = SalesManager::QueryPersonalByDocumentNumber(personalDocument);
			srand(time(NULL));
			int num;
			num = rand() % 2;
			bool encontrado = false;
			array<Byte>^ Huellita;
			String^ anio;
			String^ mes;
			String^ dia;
			String^ hora;
			String^ minuto;
			String^ segundo;
			int anio_i, mes_i, dia_i, hora_i, minuto_i, segundo_i, horacio;
			
			time_t ttime = time(0);
			tm* local_time = localtime(&ttime);
			
			anio_i = 1900 + local_time->tm_year;
			mes_i = 1 + local_time->tm_mon;
			dia_i = local_time->tm_mday;
			hora_i = local_time->tm_hour;
			minuto_i = local_time->tm_min;
			segundo_i = local_time->tm_sec;
			anio = (anio_i).ToString();
			mes = (mes_i).ToString();
			dia = (dia_i).ToString();
			hora = (hora_i).ToString();
			minuto = (minuto_i).ToString();
			segundo = (segundo_i).ToString();
			horacio = Int32::Parse(txtHora->Text);
			if (num == 1)
			{
				pbHuella->Image = gcnew Bitmap(".\\Resources\\" + personal->FirstName[0] + personal->FirstLastName[0] + personal->DocumentNumber + ".jpg");//Bitmap(opnfd->FileName);
			}
			else
			{
				MessageBox::Show("Coloque su huella correctamente.");
				return;
			}
			//pbHuella->Image = gcnew Bitmap("E:\\Users\\daquino\\Desktop\\Daniel\\PUCP\\Ciclo2021-I\\LPOO(INF237-06M1)\\Gestor-de-Empresa\\SalesView\\Resources\\"+ personal->FirstName[0] + personal->FirstLastName[0] + ""+personal->Id + ".jpg");//Bitmap(opnfd->FileName);
			//MessageBox::Show(opnfd->FileName);
			if (pbHuella->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbHuella->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				Huellita = ms->ToArray();
			}
			List<Personal^>^ personalList = SalesManager::QueryPersonal();
			for (int i = 0; i < personalList->Count; i++) {
				if (Huellita->Length == personalList[i]->Huella->Length)
				{
					Asistencia^ sp = gcnew Asistencia();
					if (/*(hora_i>=8 && hora_i <= 10) ||*/ (horacio >= 8 && horacio <= 10))
					{
						sp->Fecha = DateTime::Today.Now; //dia + "/" + mes + "/" + anio;
						sp->Hora = hora + ":" + minuto + ":" + segundo;
						sp->Check = "Asistió";
						personalList[i]->Activo = "Active";
						sp->IO = "Entrada";
						personalList[i]->AsistenciaList->Add(sp);
						SalesManager::UpdatePersonal(personalList[i]);
						MessageBox::Show("Fecha y hora de asistencia: "+ dia + "/" + mes + "/" + anio + " " + hora + ":" + minuto + ":" + segundo +
							"\nBienvenido: " + personalList[i]->FirstName + " " + personalList[i]->FirstLastName +
							"\nLlegaste temprano.");
						encontrado = true;
						return;
					}
					else if (/*(hora_i>10 && hora_i<=13) ||*/ (horacio > 10 && horacio <= 13))
					{
						sp->Fecha = DateTime::Today.Now; //dia + "/" + mes + "/" + anio;
						sp->Hora = hora + ":" + minuto + ":" + segundo;
						sp->Check = "Tardanza";
						personalList[i]->Activo = "Active";
						sp->IO = "Entrada";
						personalList[i]->AsistenciaList->Add(sp);
						SalesManager::UpdatePersonal(personalList[i]);
						MessageBox::Show("Fecha y hora de asistencia: " + dia + "/" + mes + "/" + anio + " " + hora + ":" + minuto + ":" + segundo +
							"\nBienvenido: " + personalList[i]->FirstName + " " + personalList[i]->FirstLastName +
							"\nLlegaste tarde.");
						encontrado = true;
						return;
					}
					else if (/*(hora_i>=20 && hora_i<=23) ||*/ (horacio >= 20 && horacio <= 23))
					{
						sp->Fecha = DateTime::Today.Now; //dia + "/" + mes + "/" + anio;
						sp->Hora = hora + ":" + minuto + ":" + segundo;
						sp->Check = "Asistió";
						personalList[i]->Activo = "No Active";
						sp->IO = "Salida";
						personalList[i]->AsistenciaList->Add(sp);
						SalesManager::UpdatePersonal(personalList[i]);
						MessageBox::Show("Fecha y hora de salida: " + dia + "/" + mes + "/" + anio + " " + hora + ":" + minuto + ":" + segundo +
							"\nHasta luego: " + personalList[i]->FirstName + " " + personalList[i]->FirstLastName);
						encontrado = true;
						return;
					}
				}
			}
			if (!encontrado)
			{
				MessageBox::Show("Huella no encontrada.");
			}
		//}
	}
private: System::Void btnFalta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ anio;
	String^ mes;
	String^ dia;
	int anio_i, mes_i, dia_i, hora_i, minuto_i, segundo_i, contador = 0;
	time_t ttime = time(0);
	tm* local_time = localtime(&ttime);
	anio_i = 1900 + local_time->tm_year;
	mes_i = 1 + local_time->tm_mon;
	dia_i = local_time->tm_mday;
	hora_i = local_time->tm_hour;
	minuto_i = local_time->tm_min;
	segundo_i = local_time->tm_sec;
	anio = (anio_i).ToString();
	mes = (mes_i).ToString();
	dia = (dia_i).ToString();
	List<Personal^>^ personalList = SalesManager::QueryPersonal();
	for (int i = 0; i < personalList->Count; i++) {
		//if (hora_i > 13)
		//{
			Asistencia^ sp = gcnew Asistencia();
			if (personalList[i]->Activo == "No Active")
			{
				sp->Fecha = DateTime::Today.Now; //dia + "/" + mes + "/" + anio; 
				sp->Check = "No Asistió";
				personalList[i]->AsistenciaList->Add(sp);
				SalesManager::UpdatePersonal(personalList[i]);
				contador++;
			}
		//}
	}
	MessageBox::Show("No asistieron: " + contador + " trabajadores");
}
private: System::Void AssistForm_Load(System::Object^ sender, System::EventArgs^ e) {
	AddCmbPersonal();
}
};
}
