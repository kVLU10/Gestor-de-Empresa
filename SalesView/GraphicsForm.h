#pragma once



namespace SalesView {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Proyecto;
	using namespace SalesController;
	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
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
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechartPersonal;
	protected:

	protected:

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSearchP;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnFromStart;

	private: System::Windows::Forms::Button^ BtnRefresh;
	private: System::Windows::Forms::Button^ btnSearchDNI;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Asistencia;
	private: System::Windows::Forms::TabPage^ Ventas;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->piechartPersonal = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSearchP = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnFromStart = (gcnew System::Windows::Forms::Button());
			this->BtnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnSearchDNI = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Asistencia = (gcnew System::Windows::Forms::TabPage());
			this->Ventas = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartPersonal))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->Asistencia->SuspendLayout();
			this->Ventas->SuspendLayout();
			this->SuspendLayout();
			// 
			// piechartPersonal
			// 
			chartArea1->Name = L"ChartArea1";
			this->piechartPersonal->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->piechartPersonal->Legends->Add(legend1);
			this->piechartPersonal->Location = System::Drawing::Point(588, 55);
			this->piechartPersonal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->piechartPersonal->Name = L"piechartPersonal";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Asistencia";
			this->piechartPersonal->Series->Add(series1);
			this->piechartPersonal->Size = System::Drawing::Size(533, 377);
			this->piechartPersonal->TabIndex = 0;
			this->piechartPersonal->Text = L"chart1";
			this->piechartPersonal->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::SystemDefault;
			this->piechartPersonal->Click += gcnew System::EventHandler(this, &GraphicsForm::chart1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(129, 151);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 24);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(129, 97);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 24);
			this->comboBox3->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(21, 230);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(252, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(311, 233);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(252, 22);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(119, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Desde";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(409, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Hasta";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(92, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"INFORME DE VENTAS POR PRODUCTO";
			// 
			// btnSearchP
			// 
			this->btnSearchP->Location = System::Drawing::Point(327, 96);
			this->btnSearchP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchP->Name = L"btnSearchP";
			this->btnSearchP->Size = System::Drawing::Size(75, 23);
			this->btnSearchP->TabIndex = 10;
			this->btnSearchP->Text = L"Buscar";
			this->btnSearchP->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Producto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Categoría";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(123, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"INFORME DE ASISTENCIA";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"DNI";
			// 
			// btnFromStart
			// 
			this->btnFromStart->Location = System::Drawing::Point(52, 308);
			this->btnFromStart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFromStart->Name = L"btnFromStart";
			this->btnFromStart->Size = System::Drawing::Size(198, 26);
			this->btnFromStart->TabIndex = 15;
			this->btnFromStart->Text = L"Busqueda Personalizada";
			this->btnFromStart->UseVisualStyleBackColor = true;
			this->btnFromStart->Click += gcnew System::EventHandler(this, &GraphicsForm::btnFromStart_Click);
			// 
			// BtnRefresh
			// 
			this->BtnRefresh->Location = System::Drawing::Point(362, 308);
			this->BtnRefresh->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BtnRefresh->Name = L"BtnRefresh";
			this->BtnRefresh->Size = System::Drawing::Size(137, 26);
			this->BtnRefresh->TabIndex = 16;
			this->BtnRefresh->Text = L"Reiniciar";
			this->BtnRefresh->UseVisualStyleBackColor = true;
			this->BtnRefresh->Click += gcnew System::EventHandler(this, &GraphicsForm::BtnRefresh_Click);
			// 
			// btnSearchDNI
			// 
			this->btnSearchDNI->Location = System::Drawing::Point(320, 81);
			this->btnSearchDNI->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchDNI->Name = L"btnSearchDNI";
			this->btnSearchDNI->Size = System::Drawing::Size(75, 26);
			this->btnSearchDNI->TabIndex = 8;
			this->btnSearchDNI->Text = L"Buscar";
			this->btnSearchDNI->UseVisualStyleBackColor = true;
			this->btnSearchDNI->Click += gcnew System::EventHandler(this, &GraphicsForm::btnSearchDNI_Click);
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(123, 81);
			this->txtDNI->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(173, 22);
			this->txtDNI->TabIndex = 17;
			this->txtDNI->Enter += gcnew System::EventHandler(this, &GraphicsForm::txtDNI_Enter);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Asistencia);
			this->tabControl1->Controls->Add(this->Ventas);
			this->tabControl1->Location = System::Drawing::Point(16, 15);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1155, 517);
			this->tabControl1->TabIndex = 18;
			// 
			// Asistencia
			// 
			this->Asistencia->Controls->Add(this->BtnRefresh);
			this->Asistencia->Controls->Add(this->txtDNI);
			this->Asistencia->Controls->Add(this->btnFromStart);
			this->Asistencia->Controls->Add(this->label2);
			this->Asistencia->Controls->Add(this->label6);
			this->Asistencia->Controls->Add(this->label1);
			this->Asistencia->Controls->Add(this->btnSearchDNI);
			this->Asistencia->Controls->Add(this->dateTimePicker2);
			this->Asistencia->Controls->Add(this->label7);
			this->Asistencia->Controls->Add(this->dateTimePicker1);
			this->Asistencia->Controls->Add(this->piechartPersonal);
			this->Asistencia->Location = System::Drawing::Point(4, 25);
			this->Asistencia->Margin = System::Windows::Forms::Padding(4);
			this->Asistencia->Name = L"Asistencia";
			this->Asistencia->Padding = System::Windows::Forms::Padding(4);
			this->Asistencia->Size = System::Drawing::Size(1147, 488);
			this->Asistencia->TabIndex = 0;
			this->Asistencia->Text = L"Asistencia";
			this->Asistencia->UseVisualStyleBackColor = true;
			// 
			// Ventas
			// 
			this->Ventas->Controls->Add(this->comboBox3);
			this->Ventas->Controls->Add(this->comboBox2);
			this->Ventas->Controls->Add(this->label5);
			this->Ventas->Controls->Add(this->label3);
			this->Ventas->Controls->Add(this->label4);
			this->Ventas->Controls->Add(this->btnSearchP);
			this->Ventas->Location = System::Drawing::Point(4, 25);
			this->Ventas->Margin = System::Windows::Forms::Padding(4);
			this->Ventas->Name = L"Ventas";
			this->Ventas->Padding = System::Windows::Forms::Padding(4);
			this->Ventas->Size = System::Drawing::Size(1147, 488);
			this->Ventas->TabIndex = 1;
			this->Ventas->Text = L"Ventas";
			this->Ventas->UseVisualStyleBackColor = true;
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 550);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"GraphicsForm";
			this->Text = L"Reportes con Gráficas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartPersonal))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->Asistencia->ResumeLayout(false);
			this->Asistencia->PerformLayout();
			this->Ventas->ResumeLayout(false);
			this->Ventas->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void btnSearchDNI_Click(System::Object^ sender, System::EventArgs^ e) {
	
	piechartPersonal->Series["Asistencia"]->Points->Clear();
	List<Personal^>^ personalList = SalesManager::QueryPersonal();
	
	String^ dni = txtDNI->Text;
	


	int NoAsist = 0;
	int Asist = 0;
	int Tardanza = 0;
	int Encontrado = 0;
	if (personalList != nullptr) {

		for (int i = 0; i < personalList->Count; i++) {

			if ( personalList[i]->DocumentNumber == dni) {

				for (int j = 0; j<personalList[i]->AsistenciaList->Count; j++) {

					if (personalList[i]->AsistenciaList[j]->Check == "No Asistió")
					{
						NoAsist++;
					}
					else if (personalList[i]->AsistenciaList[j]->Check == "Asistió")

					{
						Asist++;
					}
				
					else if (personalList[i]->AsistenciaList[j]->Check == "Tardanza")

					{
						Tardanza++;
					}

				}


				//piechartSalesman->Series["Salario"]->Points->AddXY(
				//	salesmanList[i]->FirstName, "" + salesmanList[i]->Salary);
				piechartPersonal->Series["Asistencia"]->Points->Add(NoAsist);
				piechartPersonal->Series["Asistencia"]->Points->Add(Asist);
				piechartPersonal->Series["Asistencia"]->Points->Add(Tardanza);

				//piechartSalesman->Series["Salario"]->Points[i]->Color = Color::Blue;
				piechartPersonal->Series["Asistencia"]->Points[0]->AxisLabel = "No asistió";
				piechartPersonal->Series["Asistencia"]->Points[1]->AxisLabel = "Asistió";
				piechartPersonal->Series["Asistencia"]->Points[2]->AxisLabel = "Tardanza";

				piechartPersonal->Series["Asistencia"]->Points[0]->LegendText = "No asistió";
				piechartPersonal->Series["Asistencia"]->Points[1]->LegendText = "Asistió";
				piechartPersonal->Series["Asistencia"]->Points[2]->LegendText = "Tardanza";
				
				piechartPersonal->Series["Asistencia"]->Points[0]->Label = "" + NoAsist;
				piechartPersonal->Series["Asistencia"]->Points[1]->Label = "" + Asist;
				piechartPersonal->Series["Asistencia"]->Points[2]->Label = "" + Tardanza;


				Encontrado = 1;
				MessageBox::Show("Encontrado");
				break;
				
			}
		}

	
		if (Encontrado == 0) {
			MessageBox::Show("Personal no encontrado");

		}

	}



}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDNI_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void btnFromStart_Click(System::Object^ sender, System::EventArgs^ e) {

	piechartPersonal->Series["Asistencia"]->Points->Clear();
	List<Personal^>^ personalList = SalesManager::QueryPersonal();

	double dni = Int32::Parse(txtDNI->Text);

	int NoAsist = 0;
	int Asist = 0;
	int Tardanza = 0;
	int Encontrado = 0;



	if (personalList != nullptr) {

		for (int i = 0; i < personalList->Count; i++) {
			
			if (personalList[i]->Id == dni) {

				for (int j = 0; j < personalList[i]->AsistenciaList->Count; j++) {

					if (personalList[i]->AsistenciaList[j]->Check == "No Asistió" &&
						personalList[i]->AsistenciaList[j]->Fecha>= dateTimePicker1->Value &&
						personalList[i]->AsistenciaList[j]->Fecha <= dateTimePicker2->Value)
					{
						NoAsist++;
					}
					else if (personalList[i]->AsistenciaList[j]->Check == "Asistió" &&
						personalList[i]->AsistenciaList[j]->Fecha >= dateTimePicker1->Value &&
						personalList[i]->AsistenciaList[j]->Fecha <= dateTimePicker2->Value)

					{
						Asist++;
					}

					else if (personalList[i]->AsistenciaList[j]->Check == "Tardanza" &&
						personalList[i]->AsistenciaList[j]->Fecha >= dateTimePicker1->Value &&
						personalList[i]->AsistenciaList[j]->Fecha <= dateTimePicker2->Value)
					{
						Tardanza++;
					}

				}


				//piechartSalesman->Series["Salario"]->Points->AddXY(
				//	salesmanList[i]->FirstName, "" + salesmanList[i]->Salary);
				piechartPersonal->Series["Asistencia"]->Points->Add(NoAsist);
				piechartPersonal->Series["Asistencia"]->Points->Add(Asist);
				piechartPersonal->Series["Asistencia"]->Points->Add(Tardanza);

				//piechartSalesman->Series["Salario"]->Points[i]->Color = Color::Blue;
				piechartPersonal->Series["Asistencia"]->Points[0]->AxisLabel = "No asistió";
				piechartPersonal->Series["Asistencia"]->Points[1]->AxisLabel = "Asistió";
				piechartPersonal->Series["Asistencia"]->Points[2]->AxisLabel = "Tardanza";

				piechartPersonal->Series["Asistencia"]->Points[0]->LegendText = "No asistió";
				piechartPersonal->Series["Asistencia"]->Points[1]->LegendText = "Asistió";
				piechartPersonal->Series["Asistencia"]->Points[2]->LegendText = "Tardanza";

				piechartPersonal->Series["Asistencia"]->Points[0]->Label = "" + NoAsist;
				piechartPersonal->Series["Asistencia"]->Points[1]->Label = "" + Asist;
				piechartPersonal->Series["Asistencia"]->Points[2]->Label = "" + Tardanza;


				Encontrado = 1;
				if (NoAsist == 0 && Asist == 0 && Tardanza == 0) {
					MessageBox::Show("Encontrado. No hay registros en el rango de fechas ingresado");
					break;
				}

				MessageBox::Show("Encontrado");
				break;

				

			}
		}


		if (Encontrado == 0) {
			MessageBox::Show("Personal no encontrado");
		}

	}



}
private: System::Void BtnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {

	piechartPersonal->Series["Asistencia"]->Points->Clear();
}
};
}
